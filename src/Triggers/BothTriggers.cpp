#include "BothTriggers.h"

#include "Robot.h"
#include "OI.h"
#include "RobotMap.h"

BothTriggers::BothTriggers() {

}

bool BothTriggers::Get() {
	return (Robot::operatorInput->getAxis(RIGHT_TRIGGER) > 0.75 && Robot::operatorInput->getAxis(LEFT_TRIGGER) );
}

