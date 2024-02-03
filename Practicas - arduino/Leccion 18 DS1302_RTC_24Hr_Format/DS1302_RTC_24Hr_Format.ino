#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
#include <DS1302.h>
DS1302 rtc(4, 7, 8); //RST,DAT,CLK Pins of the DS1302 Module 
bool alarma=true;

void setup()
{
  Serial.begin(9600);
  rtc.halt(false);
  rtc.writeProtect(false);
  //Comentar esta parte si no utilizas el lcd
  lcd.backlight();
  lcd.init();
  lcd.begin(16, 2);
  //Esta seccion es para colocar la hora y la fecha manualmente
  /*rtc.setDOW(FRIDAY);      //name of the day of the week
  rtc.setTime(17, 43, 00);  //Hour, Min, Sec 
  rtc.setDate(02, 02, 2024); //Day, Month, Year */
  Serial.println(rtc.getDateStr(FORMAT_SHORT, FORMAT_LITTLEENDIAN, '/'));
}

void loop()
{
  //Comentar esta parte si no se utiliza el lcd
  lcd.setCursor(0,1);
  lcd.print("Hora: ");
  lcd.setCursor(6, 1);
  lcd.print(rtc.getTimeStr());
  lcd.setCursor(0, 0);
  lcd.print("Fecha:");
  lcd.setCursor(7,0);
  lcd.print(rtc.getDateStr(FORMAT_SHORT, FORMAT_LITTLEENDIAN, '/'));

  Serial.println(rtc.getTimeStr());
  if(rtc.getTimeStr()=="17:33:00"){
    if(alarma=true){
      Serial.println("Activada");
      digitalWrite(12,HIGH);
      alarma=false;
    }
    
  }if(rtc.getTimeStr()=="17:34:00"){
    Serial.println("Desactivada");
    digitalWrite(12,LOW);
    alarma=true;
  }
  //lcd.setCursor(13,1);
  //lcd.print(rtc.getDOWStr());
  delay (1000); 
  
  
}
