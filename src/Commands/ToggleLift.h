#ifndef ToggleLift_H
#define ToggleLift_H

#include <Commands/Command.h>

class ToggleLift : public Command {
public:
	ToggleLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool state;
};

#endif  // ToggleLift_H
