#ifndef OI_H
#define OI_H

#include <memory>

namespace frc
{
	class Joystick;
}

class OI {
public:
	OI();
	~OI();

	double getAxis(int);
	double applyDeadzone(double);
private:
	std::unique_ptr<frc::Joystick> driver;
};

#endif  // OI_H
