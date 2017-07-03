#include "SerialCommand.h"

SerialCommand serialCMD;

float Value1 = 0;
float Value2 = 0;
float Value3 = 0;

void setup() {
  // In terminal, type value1:56 and print1
    
  serialCMD = SerialCommand(&Serial, 9600);
  serialCMD.AddCommand("value1", &Value1);
  serialCMD.AddCommand("print1", PrintValue1);
  serialCMD.AddCommand("value2", &Value2);
  serialCMD.AddCommand("print2", PrintValue2); 
  serialCMD.AddCommand("value3", &Value3);
  serialCMD.AddCommand("print3", PrintValue3); 
}

void loop() {
  serialCMD.Execute();
}

void PrintValue1()
{
  Serial.println(Value1);
}

void PrintValue2()
{
  Serial.println(Value2);
}

void PrintValue3()
{
  Serial.println(Value3);
}
