#include "DriveWithJoys.h"

#include "Robot.h"
#include "Subsystems/DriveTrain.h"
#include "RobotMap.h"

DriveWithJoys::DriveWithJoys() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::drivetrain.get());
}

// Called just before this Command runs the first time
void DriveWithJoys::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoys::Execute() {
	Robot::drivetrain->drive(Robot::operatorInput->getAxis(LEFT_Y), Robot::operatorInput->getAxis(RIGHT_X));
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoys::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoys::End() {
	Robot::drivetrain->drive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoys::Interrupted() {
	Robot::drivetrain->drive(0,0);
}
