#include "Climber.h"
#include "../RobotMap.h"
#include "Victor.h"

Climber::Climber() : Subsystem("climber"),
	climberMotor(std::make_unique<Victor>(PWM_CLIMBER))
{

}

void Climber::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Climber::climberOn(double speed) {
	climberMotor->Set(speed);
}
