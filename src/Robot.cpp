#include "Robot.h"
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>

std::shared_ptr<DriveTrain> Robot::drivetrain;
std::shared_ptr<OI> Robot::operatorInput;

void Robot::RobotInit(){
	Robot::drivetrain.reset(new DriveTrain);
	Robot::operatorInput.reset(new OI);
}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic(){
	frc::Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit(){

}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	frc::LiveWindow::GetInstance()->Run();
}


START_ROBOT_CLASS(Robot)
