#include "OI.h"
#include "RobotMap.h"

#include <Joystick.h>
#include <cmath>

OI::OI() :
	driver(std::make_unique<Joystick>(JOY_DRIVER))
{

}

OI::~OI() = default;

double OI::getAxis(int axis){
	return applyDeadzone(driver->GetRawAxis(axis));
}

double OI::applyDeadzone(double input){
	double output = 0;

	if(std::abs(input) > DEADZONE) {
		output = input;
	}

	return output;
}
