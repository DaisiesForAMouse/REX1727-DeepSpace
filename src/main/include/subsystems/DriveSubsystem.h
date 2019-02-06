#pragma once

#include <memory>

#include "frc/commands/Subsystem.h"
#include "frc/SpeedControllerGroup.h"
#include "frc/drive/DifferentialDrive.h"
#include "rev/CANSparkMax.h"

#include "RobotMap.h"

class DriveSubsystem: public frc::Subsystem {
public:
    DriveSubsystem();
    void InitDefaultCommand() override;
    void SetLeftDrive(double, bool);
    void SetRightDrive(double, bool);
    void SetDrive(double, double, bool);
private:
    rev::CANSparkMax left_back;
    rev::CANSparkMax left_front;
    rev::CANSparkMax right_back;
    rev::CANSparkMax right_front;

    frc::SpeedControllerGroup left_drive;
    frc::SpeedControllerGroup right_drive;

    frc::DifferentialDrive drive;
};
