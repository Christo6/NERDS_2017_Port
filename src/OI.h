#ifndef OI_H
#define OI_H

#include <memory>

namespace frc
{
	class Joystick;
	class JoystickButton;
}

class OI {
public:
	OI();
	~OI();

	double getAxis(int);
	double applyDeadzone(double);
private:
	std::unique_ptr<frc::Joystick> driver;
	std::unique_ptr<frc::JoystickButton> driverRB;
	std::unique_ptr<frc::JoystickButton> driverLB;
};

#endif  // OI_H
