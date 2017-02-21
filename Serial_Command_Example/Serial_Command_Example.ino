#include "SerialCommand.h"

SerialCommand serialCMD;

float Value1 = 0;

void PrintValue1()
{
  Serial.println(Value1);
}

float Value2 = 0;

void PrintValue2()
{
  Serial.println(Value2);
}

float Value3 = 0;

void PrintValue3()
{
  Serial.println(Value3);
}

float Value4 = 0;

void PrintValue4()
{
  Serial.println(Value4);
}

float Value5 = 0;

void PrintValue5()
{
  Serial.println(Value5);
}

float Value6 = 0;

void PrintValue6()
{
  Serial.println(Value6);
}

float Value7 = 0;

void PrintValue7()
{
  Serial.println(Value7);
}

float Value8 = 0;

void PrintValue8()
{
  Serial.println(Value8);
}

float Value9 = 0;

void PrintValue9()
{
  Serial.println(Value9);
}

float Value10 = 0;

void PrintValue10()
{
  Serial.println(Value10);
}

float Value11 = 0;

void PrintValue11()
{
  Serial.println(Value11);
}

float Value12 = 0;

void PrintValue12()
{
  Serial.println(Value12);
}

void setup() {
  // In terminal, type value1:56 and print1
    
  serialCMD = SerialCommand(9600);
  serialCMD.AddCommand("value1", &Value1);
  serialCMD.AddCommand("print1", PrintValue1);
  serialCMD.AddCommand("value2", &Value2);
  serialCMD.AddCommand("print2", PrintValue2); 
  serialCMD.AddCommand("value3", &Value3);
  serialCMD.AddCommand("print3", PrintValue3); 
  serialCMD.AddCommand("value4", &Value4);
  serialCMD.AddCommand("print4", PrintValue4); 
  serialCMD.AddCommand("value5", &Value5);
  serialCMD.AddCommand("print5", PrintValue5); 
  serialCMD.AddCommand("value6", &Value6);
  serialCMD.AddCommand("print6", PrintValue6); 
  serialCMD.AddCommand("value7", &Value7);
  serialCMD.AddCommand("print7", PrintValue7); 
  serialCMD.AddCommand("value8", &Value8);
  serialCMD.AddCommand("print8", PrintValue8); 
  serialCMD.AddCommand("value9", &Value9);
  serialCMD.AddCommand("print9", PrintValue9); 
  serialCMD.AddCommand("value10", &Value10);
  serialCMD.AddCommand("print10", PrintValue10); 
  serialCMD.AddCommand("value11", &Value11);
  serialCMD.AddCommand("print11", PrintValue11); 
  serialCMD.AddCommand("value12", &Value12);
  serialCMD.AddCommand("print12", PrintValue12);
}

void loop() {
  serialCMD.Execute();
}
