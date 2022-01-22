//A full description of this module (and many others) can be downloaded at: https://eve_arduino

#include <SoftEasyTransfer.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(7, 8);
SoftEasyTransfer ET; 

struct SEND_DATA_STRUCTURE{
  char text[32];
};

SEND_DATA_STRUCTURE mydata;

void setup()
{
  mySerial.begin(9600);
  ET.begin(details(mydata), &mySerial);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  String string="Hello World";
  string.toCharArray(mydata.text,12);
  ET.sendData();


  
  delay(2000);
}
 
