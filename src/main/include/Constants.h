// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <units/length.h>

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */
namespace DrivebaseConstants {
// see https://docs.wpilib.org/en/stable/docs/romi-robot/getting-to-know-romi.html
inline constexpr units::meter_t kWheelDiameter = 70_mm;
inline constexpr units::meter_t kTrackwidth = 141_mm;
inline constexpr int kEncoderCountPerRev = 1440;

}   // DrivebaseConstants


namespace OperatorConstants {

inline constexpr int kDriverControllerPort = 0;

}  // namespace OperatorConstants
