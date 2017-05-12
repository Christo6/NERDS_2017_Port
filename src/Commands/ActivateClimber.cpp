#include "ActivateClimber.h"
#include "Robot.h"

ActivateClimber::ActivateClimber() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::climber.get());
}

// Called just before this Command runs the first time
void ActivateClimber::Initialize() {
	Robot::climber->climberOn(1);
}

// Called repeatedly when this Command is scheduled to run
void ActivateClimber::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ActivateClimber::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ActivateClimber::End() {
	Robot::climber->climberOn(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ActivateClimber::Interrupted() {
	Robot::climber->climberOn(0);
}
