// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

// #include <frc/BuiltInAccelerometer.h>
#include <frc/Encoder.h>
#include <frc/motorcontrol/Spark.h>
#include <frc/romi/RomiGyro.h>
#include <frc2/command/SubsystemBase.h>

#include "Constants.h"

using namespace DrivebaseConstants;

class Drivebase : public frc2::SubsystemBase {
 public:
  Drivebase();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // See https://docs.wpilib.org/en/stable/docs/romi-robot/getting-to-know-romi.html
  // for pins and channels
  frc::Spark m_leftMotor{0};
  frc::Spark m_rightMotor{1};
  frc::Encoder m_leftEncoder{4, 5};
  frc::Encoder m_rightEncoder{6, 7};
};
