#pragma once

#include <memory>

#include "frc/commands/Command.h"
#include "frc/XboxController.h"

#include "subsystems/DriveSubsystem.h"
#include "OI.h"

class DriveCommand : public frc::Command {
public:
    DriveCommand(std::shared_ptr<DriveSubsystem>, std::shared_ptr<OI>);
    void Initialize() override;
    void Execute() override;
    bool IsFinished() override;
    void End() override;
    void Interrupted() override;
private:
    std::shared_ptr<DriveSubsystem> drive;
    std::shared_ptr<OI> oi;
};
