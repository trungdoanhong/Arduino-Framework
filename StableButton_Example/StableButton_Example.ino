
#include "StableButton.h"

#define MODE	12
#define UP		11
#define DOWN	10
#define LEFT  9
#define RIGHT 8
#define OK    7

uint8_t ButtonArray[] = { MODE, UP, DOWN, LEFT, RIGHT, OK };

void setup()
{
	Serial.begin(9600);
	StableButton.Init(ButtonArray, 6);  
}

void loop()
{

	if (StableButton.IsPressed(MODE))
		Serial.println("MODE");

	if (StableButton.IsPressed(UP))
		Serial.println("UP");

	if (StableButton.IsPressed(DOWN))
		Serial.println("DOWN");

   if (StableButton.IsPressed(LEFT))
   Serial.println("LEFT");

   if (StableButton.IsPressed(RIGHT))
   Serial.println("RIGHT");

   if (StableButton.IsPressed(OK))
   Serial.println("OK");

}
