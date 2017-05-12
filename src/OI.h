#ifndef OI_H
#define OI_H

#include <memory>

namespace frc
{
	class Joystick;
}

class BothTriggers;

class OI {
public:
	OI();
	~OI();

	double getAxis(int);
	double applyDeadzone(double);
private:
	std::unique_ptr<frc::Joystick> driver;
	std::unique_ptr<BothTriggers> trigClimber;
};

#endif  // OI_H
