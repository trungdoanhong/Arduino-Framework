
#include "StableButton.h"

#define MODE	A0
#define UP		A1
#define DOWN	A2

uint8_t ButtonArray[] = { MODE, UP, DOWN };

void setup()
{
	Serial.begin(9600);
	StableButton.Init(ButtonArray, 3);  
}

void loop()
{

	if (StableButton.IsPressed(MODE))
		Serial.println("MODE");

	if (StableButton.IsPressed(UP))
		Serial.println("UP");

	if (StableButton.IsPressed(DOWN))
		Serial.println("DOWN");

}
