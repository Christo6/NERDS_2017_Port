#ifndef ActivateClimber_H
#define ActivateClimber_H

#include <Commands/Command.h>

class ActivateClimber : public Command {
public:
	ActivateClimber();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ActivateClimber_H
