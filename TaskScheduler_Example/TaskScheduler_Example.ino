#include "TaskScheduler.h"

void setup()
{
	Serial.begin(9600);

	TaskScheduler.Init();

	TaskScheduler.Add(RunB, 100);
	TaskScheduler.Add(RunD, 700);
	TaskScheduler.Add(RunA, 100);
	TaskScheduler.Add(RunC, 250);
	TaskScheduler.Add(RunE, 1000);
	TaskScheduler.Run();

	//----------- Blink----------
	pinMode(13, OUTPUT);
}

void loop()
{
	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500);

}

void RunA()
{
	static int a = 0;
	a++;
	Serial.print(millis());
	Serial.print("-");
	Serial.print("A");
	Serial.println(a);

	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500);
}

void RunB()
{
	static int b = 0;
	b++;
	Serial.print(millis());
	Serial.print("-");
	Serial.print("B");
	Serial.println(b);
}

void RunC()
{
	static int c = 0;
	c++;
	Serial.print(millis());
	Serial.print("-");
	Serial.print("C");
	Serial.println(c);
}

void RunD()
{
	static int d = 0;
	d++;
	Serial.print(millis());
	Serial.print("-");
	Serial.print("D");
	Serial.println(d);
}

void RunE()
{
	static int e = 0;
	e++;
	Serial.print(millis());
	Serial.print("-");
	Serial.print("E");
	Serial.println(e);
}