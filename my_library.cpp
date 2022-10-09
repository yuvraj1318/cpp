// C++ program to include the
// custom header file

// Include statement to include
// custom header file
#include "my_library.h"

DCMotor::DCMotor(byte pin1, byte pin2, int speed)
{
	this->pin1 = pin1;
	this->pin2 = pin2;
	this->speed = speed;
}

// Function to rotate DC motor
// anti-clockwise
void DCMotor::clockwise()
{
	analogWrite(pin1, speed);
	analogWrite(pin2, 0);
}

// Function to rotate DC motor
// clockwise
void DCMotor::antiClockwise()
{
	analogWrite(pin1, 0);
	analogWrite(pin2, speed);
}

// Function to stop DC motor
void DCMotor::stop()
{
	analogWrite(pin1, 0);
	analogWrite(pin2, 0);
}

void DCMotor::motorDelay() { delay(1000); }
