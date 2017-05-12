#include "ToggleDoor.h"
#include "Robot.h"

ToggleDoor::ToggleDoor() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::pneumatics.get());
	state = false;
}

// Called just before this Command runs the first time
void ToggleDoor::Initialize() {
	if(state) {
		Robot::pneumatics->closeDoor();
		state = false;
	} else {
		Robot::pneumatics->openDoor();
		state = true;
	}
}

// Called repeatedly when this Command is scheduled to run
void ToggleDoor::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ToggleDoor::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleDoor::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleDoor::Interrupted() {

}
