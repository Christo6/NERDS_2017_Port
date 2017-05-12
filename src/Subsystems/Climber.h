#ifndef Climber_H
#define Climber_H

#include <Commands/Subsystem.h>
#include <memory>

namespace frc
{
	class Victor;
}

class Climber : public Subsystem {
public:
	Climber();
	void InitDefaultCommand();

	void climberOn(double);
private:
	std::unique_ptr<frc::Victor> climberMotor;
};

#endif  // Climber_H
