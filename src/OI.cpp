#include "OI.h"
#include "RobotMap.h"

#include <Joystick.h>
#include <cmath>
#include <Buttons/JoystickButton.h>

#include "Commands/ToggleDoor.h"
#include "Commands/ToggleLift.h"

OI::OI() :
	driver(std::make_unique<Joystick>(JOY_DRIVER)),
	driverRB(std::make_unique<JoystickButton>(driver.get(), DRIVER_RB)),
	driverLB(std::make_unique<JoystickButton>(driver.get(), DRIVER_LB))
{
	driverRB->WhenPressed(new ToggleDoor);
	driverLB->WhenPressed(new ToggleLift);
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
