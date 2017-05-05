#include "DriveTrain.h"
#include "../RobotMap.h"

#include <RobotDrive.h>
#include <cmath>

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	drivetrain(std::make_unique<RobotDrive>(LEFT_DRIVE, RIGHT_DRIVE))
{

}

DriveTrain::~DriveTrain() = default;

void DriveTrain::InitDefaultCommand() {

}

void DriveTrain::drive(double speed, double turn) {
	drivetrain->ArcadeDrive(speed, turn);
}

double DriveTrain::sensitivity(double input, SensitivityTuning tune) {
	double output = 0;

	if(std::abs(input) > tune.deadzone) {
		output = std::abs(input) * (tune.max_speed - tune.min_speed) + tune.min_speed;
		if(input < 0) {
			output = -output;
		}
	}

	return output;
}

double DriveTrain::applyTrim(double speed, double turn, TrimTuning forward, TrimTuning backward) {
	TrimTuning direction;
	if(speed < 0) {
		direction = forward;
	} else {
		direction = backward;
	}

	double output = turn;

	if(std::abs(speed) > direction.deadzone) {
		output = std::abs(speed) * (direction.max_speed - direction.min_speed) + direction.min_speed;
		if(direction.LR) {
			output = turn - output;
		} else {
			output = turn + output;
		}
	}

	return output;
}
