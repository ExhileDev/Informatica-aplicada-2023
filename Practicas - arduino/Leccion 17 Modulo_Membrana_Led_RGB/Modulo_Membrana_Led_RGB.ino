//Librerías para usar el teclado y la pantalla LCD
#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

int rojoPin = 11;       // El control del color Rojo por el pin 11
int verdePin = 10;  //El control del color Verde por el pin 10
int buzzerPin = 13;

LiquidCrystal_I2C lcd(0x27, 16, 2); //Crear el objeto lcd  dirección  0x27 y 16 columnas x 2 filas

//Declaración de variables para el control de Filas y Columnas de la matriz del teclado
const byte F = 4;
const byte C = 4;
//Declaración de valor de cada posición de la matriz 4x4
char keys [F][C] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//Declaración de que conexión se realizó entre la tarjeta UNO R3 y la matriz 4x4
byte pinesFilas[F] {9, 8, 7, 6};
byte pinesColumnas[C] {5, 4, 3, 2};

//teclado tendrá toda la información de pines y valores de la matriz 4X4
Keypad teclado = Keypad (makeKeymap(keys), pinesFilas, pinesColumnas, F, C);

//Variables para
char TECLA;
char CONTROL[5];
int con2 = 5;

//Variable que contara qué número de teclas fue presionado
byte INDICE = 0;

void setup() {
  Serial.begin(9600);
  pinMode(rojoPin, OUTPUT);          //Pin de salida 11
  pinMode(verdePin, OUTPUT);       //Pin de salida 10
  pinMode(buzzerPin,OUTPUT);
  lcd.init();
  lcd.backlight();                               //Encender la luz de fondo.
  lcd.setCursor(3,0);
  lcd.print("Control de");             // Escribimos el Mensaje en el LCD.
  lcd.setCursor(5,1);
  lcd.print("acceso");
  delay(1000);
  lcd.clear();                                     //limpiamos la pantalla para agregar nuevo mensaje
}

void loop() {
  TECLA = teclado.getKey();  //dígitos que se presionen en el teclado, serán guardados en la     //variable TECLADO

  lcd.setCursor(0, 0);                //colocamos el cursor en la posición columna, fila (0,0)
  lcd.print("Ingrese la clave");   //se visualiza el texto

  if (TECLA) {                      // Dependiendo la cantidad de Teclas presionadas se realizará un //conteo
    CONTROL[INDICE] = TECLA;  //que ayudará a limitar los caracteres requeridos
    INDICE++;                             //incremento de ese índice dependiendo las teclas presionadas
    lcd.setCursor(con2,1);
    lcd.print("*");
    con2++;
  }

  if (INDICE == 4) {            //Si el índice anteriormente incrementado llega a 4...
    lcd.clear();                     //limpia pantalla LCD
    if (!strcmp(CONTROL, "AB43")) {        //Si la combinación es AB43
      lcd.clear();
      setColor(0, 255, 0);                               //El LED RGB Brillará en color Verde
      lcd.setCursor(4, 0);
      lcd.print("ESTADO:");
      lcd.setCursor(4, 1);
      lcd.print("ABIERTO");
      digitalWrite(buzzerPin,HIGH);
      delay(2000);
      digitalWrite(buzzerPin,LOW);
      delay(1000);                                           //Instrucción que durará 1s (1000ms)
      INDICE = 0;                                                 //el indice se reiniciara
      con2=5;
      lcd.clear();
      Serial.println("VERDE");
      digitalWrite(rojoPin,LOW);
      digitalWrite(verdePin,LOW);

    } else if (!strcmp(CONTROL, "C134")) {   //Si la combinación es C134
      lcd.clear();
      setColor(255, 0, 0);
      lcd.setCursor(4, 0);
      lcd.print("ESTADO:");                                   //Brillará en color Rojo
      lcd.setCursor(4, 1);
      lcd.print("CERRADO");
      digitalWrite(buzzerPin,HIGH);
      delay(2000);
      digitalWrite(buzzerPin,LOW);
      delay(1000);                                                  //Instrucción que durará 1s (1000ms)
      INDICE = 0;                                                 //el indice se reiniciara
      con2=5;
      lcd.clear();
      Serial.println("ROJO");
      digitalWrite(rojoPin,LOW);
      digitalWrite(verdePin,LOW);
    }
    else {                                                      //Para todas las demás combinaciones de teclado
      lcd.clear();
      setColor(255, 255, 0);
      lcd.setCursor(0, 0);
      lcd.print("Intenta");                                 //pedirá que de nuevo se ingrese el código
      lcd.setCursor(0, 1);
      lcd.print("Nuevamente");
        for(int a=1; a<=5; a++){
          digitalWrite(buzzerPin,HIGH);
        delay(300);
        digitalWrite(buzzerPin,LOW);
        delay(50);
        }
        delay(1000);                                              //Instrucción que durará 1s (1000ms)
      INDICE = 0;                                                 //el indice se reiniciara
      con2=5;
      lcd.clear();
      digitalWrite(rojoPin,LOW);
      digitalWrite(verdePin,LOW);
    }
  }
}

//funcion para poder cambiar de color el led RGB dependiendo la combinación de dígitos en el //teclado
void setColor(int rojoValue, int verdeValue, int azulValue) {
  analogWrite(rojoPin, rojoValue);
  analogWrite(verdePin, verdeValue);
}
