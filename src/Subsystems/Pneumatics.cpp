#include "Pneumatics.h"
#include "../RobotMap.h"

#include <Solenoid.h>
#include <DoubleSolenoid.h>

Pneumatics::Pneumatics() : Subsystem("pneumatics"),
	gearDoor(std::make_unique<Solenoid>(PNEU_DOOR)),
	lift(std::make_unique<DoubleSolenoid>(PNEU_LIFT_FORWARD, PNEU_LIFT_BACKWARD))
{

}

Pneumatics::~Pneumatics() = default;

void Pneumatics::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Pneumatics::openDoor() {
	gearDoor->Set(true);
}

void Pneumatics::closeDoor() {
	gearDoor->Set(false);
}

void Pneumatics::openLift() {
	lift->Set(DoubleSolenoid::kForward);
	lift->Set(DoubleSolenoid::kOff);
}

void Pneumatics::closeLift() {
	lift->Set(DoubleSolenoid::kReverse);
	lift->Set(DoubleSolenoid::kOff);
}
