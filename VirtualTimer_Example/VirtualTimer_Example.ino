/* For example. I creat many timer function to push pulses for driver to control stepper motor 	
	
	Some of my useful library : https://github.com/trungdoanhong/Arduino-Framework
	Email: trungdoanhong@gmail.com
	Date: 24 - 6 - 2018
*/

#include "VirtualTimer.h"
#include "fastio.h"

#define X_STEP	2
#define Y_STEP	3
#define Z_STEP	4
#define A_STEP	12

uint32_t XStepNumber = 0;
uint32_t YStepNumber = 0;
uint32_t ZStepNumber = 0;
uint32_t AStepNumber = 0;

void InitIO()
{
	pinMode(X_STEP, OUTPUT);
	pinMode(Y_STEP, OUTPUT);
	pinMode(Z_STEP, OUTPUT);
	pinMode(A_STEP, OUTPUT);
}

void setup()
{
	InitIO();

	VirtualTimer.Init();

	VirtualTimer.Add(RunB, 50);		// us
	VirtualTimer.Add(RunC, 300);
	VirtualTimer.Add(RunD, 400);
	VirtualTimer.Add(RunE, 5000);
	VirtualTimer.Run();
}

void loop()
{

}

void RunB()
{
	TOGGLE(X_STEP);
	XStepNumber++;
	if (XStepNumber == 12000)
		VirtualTimer.Stop(RunB);
}

void RunC()
{
	TOGGLE(Y_STEP);
	YStepNumber++;
	if (YStepNumber == 2000)
		VirtualTimer.Stop(RunC);
}

void RunD()
{
	TOGGLE(Z_STEP);
	ZStepNumber++;
	if (ZStepNumber == 1500)
		VirtualTimer.Stop(RunD);
}

void RunE()
{
	TOGGLE(A_STEP);
	AStepNumber++;
	if (AStepNumber == 120)
		VirtualTimer.Stop(RunE);
}
