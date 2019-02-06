#include "commands/DriveCommand.h"

DriveCommand::DriveCommand(std::shared_ptr<DriveSubsystem> robot) :
    drive(robot) {
    Requires(drive.get());
}

void DriveCommand::Initialize() {}

void DriveCommand::Execute() {}

bool DriveCommand::IsFinished() { return false; }

void DriveCommand::End() {}

void DriveCommand::Interrupted() {}
