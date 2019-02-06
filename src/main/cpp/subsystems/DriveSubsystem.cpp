#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem() :
    frc::Subsystem("Drive Subsystem"),
    left_back(ports::left_back_drive, rev::CANSparkMax::MotorType::kBrushed),
    left_front(ports::left_front_drive, rev::CANSparkMax::MotorType::kBrushed),
    right_back(ports::right_back_drive, rev::CANSparkMax::MotorType::kBrushed),
    right_front(ports::right_front_drive, rev::CANSparkMax::MotorType::kBrushed),
    left_drive(left_back, left_front),
    right_drive(right_back, right_front),
    drive(left_drive, right_drive) {

    left_back.SetInverted(true);
    right_back.SetInverted(true);

    left_drive.SetInverted(true);
    right_drive.SetInverted(false);
}

void DriveSubsystem::SetLeftDrive(double spd, bool sqr) {
    if (sqr)
        spd *= spd < 0 ? -spd : spd;

    left_drive.Set(spd);
}

void DriveSubsystem::SetRightDrive(double spd, bool sqr) {
    if (sqr)
        spd *= spd < 0 ? -spd : spd;

    right_drive.Set(spd);
}

void DriveSubsystem::SetDrive(double l_spd, double r_spd, bool sqr){
    drive.TankDrive(l_spd, r_spd, sqr);
}

void DriveSubsystem::InitDefaultCommand() {}
