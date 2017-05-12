#ifndef ToggleDoor_H
#define ToggleDoor_H

#include <Commands/Command.h>

class ToggleDoor : public Command {
public:
	ToggleDoor();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool state;
};

#endif  // ToggleDoor_H
