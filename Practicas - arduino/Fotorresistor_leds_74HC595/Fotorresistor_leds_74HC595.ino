int lightPin = A0; // Pin analógico A0 de la tarjeta UNO R3 para conectar la LDR
int latchPin = 11; //Usaremos el Pin 11 para el manejo del Reloj de Registro (Pin 12 RCLK del 74HCC595).
int clockPin = 12; //Usaremos el Pin 12 para el manejo del Reloj de Registro de Desplazamiento
//(Pin 11 SRCLK del 74HCC595)
int dataPin = 9; //Usaremos el Pin 9 para entrada Serial del Dato (Pin 14 SER del //74HCC595)
int leds = 0; //Variable entera para el registro de leds
void setup()
{
  //Declaración de variables, como de salida digital
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}
//El valor que se obtiene la fotorresistencia es analógico entre 0 a 1023
//0 (obscuro) y 1023(luz)
void loop()
{
  int reading = analogRead(lightPin); //Lectura del valor analógico del fotorresistor
  int numLEDSLit = reading / 63; // 1023 entre 8 (8 bites) / 2 = ~63
  numLEDSLit = 9 - numLEDSLit; //Para cambiar el sentido de cambio de encendido en los leds
  if (numLEDSLit > 8) numLEDSLit = 8; //Si el valor del led es mayor que 8, el valor será igual a 8
  leds = 0; //...no habrá iluminación en los leds
  for (int i = 0; i < numLEDSLit; i++) //tendremos un incremento de la variable i, hasta que
    // sea menor a numLEDSLit
  {
    leds = leds + (1 << i); // Establece el i-décimo bit
  }
  actualizaRegistro(); //Se ejecuta la función
}
void actualizaRegistro() //Función para realizar el encendido de los leds a partir del Reloj de Registro
{
  digitalWrite(latchPin, LOW); //Pone en nivel bajo a latchPin , led apagado
  shiftOut(dataPin, clockPin, LSBFIRST, leds); //función shiftOut para desplazar el bit,
  //Indicando porque pin sale el bit (dataPin), cambio del pin una vez que dataPin tenga el valor 
  //adecuado(clockPin), dirección de desplazamiento (LSBFIRST o MSBFIRST)los datos que se 
  //desplazaran(leds)byte
  digitalWrite(latchPin, HIGH); //pone en nivel bajo a latchPin , led encendido
}
