#include "OI.h"
#include "RobotMap.h"

#include <Joystick.h>
#include <cmath>

#include <Commands/ActivateClimber.h>
#include <Triggers/BothTriggers.h>
OI::OI() :
	driver(std::make_unique<Joystick>(JOY_DRIVER)),
	trigClimber(std::make_unique<BothTriggers>())
{
	trigClimber->WhileActive(new ActivateClimber);
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
