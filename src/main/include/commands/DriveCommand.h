#include <memory>

#include "frc/commands/Command.h"

#include "subsystems/DriveSubsystem.h"

class DriveCommand : public frc::Command {
public:
    DriveCommand(std::shared_ptr<DriveSubsystem>);
    void Initialize() override;
    void Execute() override;
    bool IsFinished() override;
    void End() override;
    void Interrupted() override;
private:
    std::shared_ptr<DriveSubsystem> drive;
};
