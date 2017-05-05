#ifndef DriveWithJoys_H
#define DriveWithJoys_H

#include <Commands/Command.h>

class DriveWithJoys : public Command {
public:
	DriveWithJoys();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveWithJoys_H
