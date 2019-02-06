#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem() :
    frc::Subsystem("Drive Subsystem"),
    left_back(ports::left_back_drive, rev::CANSparkMax::MotorType::kBrushed),
    left_front(ports::left_front_drive, rev::CANSparkMax::MotorType::kBrushed),
    right_back(ports::right_back_drive, rev::CANSparkMax::MotorType::kBrushed),
    right_front(ports::right_front_drive, rev::CANSparkMax::MotorType::kBrushed),
    left_drive(left_back, left_front),
    right_drive(right_back, right_front) {

    left_back.SetInverted(true);
    right_back.SetInverted(true);

    left_drive.SetInverted(true);
    right_drive.SetInverted(false);
}

void DriveSubsystem::InitDefaultCommand() {}
