#ifndef ROBOT_H
#define ROBOT_H


/* TODO
Fix command to turn off on trigger
Add command to OI
*/

#include <IterativeRobot.h>
#include <SmartDashboard/SendableChooser.h>
#include <Commands/Command.h>

#include <memory>

#include "Subsystems/DriveTrain.h"
#include "Subsystems/Climber.h"
#include "OI.h"

class Robot: public frc::IterativeRobot {
public:
	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

	static std::shared_ptr<DriveTrain> drivetrain;
	static std::shared_ptr<OI> operatorInput;
	static std::shared_ptr<Climber> climber;
private:
	frc::SendableChooser<frc::Command*> chooser;
};

#endif /* ROBOT_H */
