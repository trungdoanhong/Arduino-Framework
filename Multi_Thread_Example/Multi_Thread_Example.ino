#include "MultiThread.h"

MultiThread printSchedule = MultiThread();
MultiThread printSchedule2 = MultiThread();

int Counter = 0;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  
  PrintEvery100();
  PrintEvery1000();
}

void PrintEvery100()
{
  RUN_EVERY(printSchedule, 100)
  Serial.println(Counter++);
}

void PrintEvery1000()
{
  RUN_EVERY(printSchedule2, 1000)
  Serial.println("A");
}

