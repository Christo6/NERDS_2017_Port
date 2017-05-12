#ifndef Pneumatics_H
#define Pneumatics_H

#include <Commands/Subsystem.h>
#include <memory>

namespace frc
{
class Solenoid;
class DoubleSolenoid;
}

class Pneumatics : public Subsystem {
public:
	Pneumatics();
	~Pneumatics();
	void InitDefaultCommand();

	void openDoor();
	void closeDoor();
	void openLift();
	void closeLift();
private:
	std::unique_ptr<frc::Solenoid> gearDoor;
	std::unique_ptr<frc::DoubleSolenoid> lift;
};

#endif  // Pneumatics_H
