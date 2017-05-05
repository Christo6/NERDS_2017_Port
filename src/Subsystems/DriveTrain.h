#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <memory>

#include "DataStructs/SensitivityTuning.h"
#include "DataStructs/TrimTuning.h"

namespace frc
{
	class RobotDrive;
}

class DriveTrain : public Subsystem {
public:
	DriveTrain();
	~DriveTrain();
	void InitDefaultCommand();

	void drive(double, double);
	double sensitivity(double, SensitivityTuning);
	double applyTrim(double, double, TrimTuning, TrimTuning);
private:
	std::unique_ptr<frc::RobotDrive> drivetrain;

};

#endif  // DriveTrain_H
