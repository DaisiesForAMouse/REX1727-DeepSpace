#include "commands/DriveCommand.h"

DriveCommand::DriveCommand(std::shared_ptr<DriveSubsystem> robot, std::shared_ptr<OI> interface) :
    drive(robot),
    oi(interface) {
    Requires(drive.get()); 
}

void DriveCommand::Initialize() {}

void DriveCommand::Execute() {
    double left_joy = oi->xbox.GetY(frc::XboxController::JoystickHand::kLeftHand);
    double right_joy = oi->xbox.GetY(frc::XboxController::JoystickHand::kRightHand);
    drive->SetDrive(left_joy, right_joy, true);
}

bool DriveCommand::IsFinished() { return false; }

void DriveCommand::End() {}

void DriveCommand::Interrupted() {}
