/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

//CAN IDs	    NAME			    	IDs
constexpr int DRIVE_LEFT_MOTOR_TOP =     1;
constexpr int DRIVE_LEFT_MOTOR_FRONT =   3;
constexpr int DRIVE_LEFT_MOTOR_BACK =    5;

constexpr int DRIVE_RIGHT_MOTOR_TOP =    2;
constexpr int DRIVE_RIGHT_MOTOR_FRONT =  4;
constexpr int DRIVE_RIGHT_MOTOR_BACK =   6;

constexpr int CASECADE_MOTOR_LEFT  =     7;
constexpr int CASECADE_MOTOR_RIGHT  =    8;

constexpr int INTAKE_MOTOR_LEFT =        9;
constexpr int INTAKE_MOTOR_RIGHT =       10;

namespace xbox
    {
    constexpr int xboxButtonA = 1;
    constexpr int xboxButtonB = 2;
    constexpr int xboxButtonX = 3;
    constexpr int xboxButtonY = 4;
    
    constexpr int xboxLeftBumper = 5;
    constexpr int xboxRightBumper = 6;

    constexpr int xboxButtonBack = 7;
    constexpr int xboxButtonStart = 8;
    
    constexpr int xboxLeftStickClick = 9;
    constexpr int xboxRightStickClick = 10;
    
    //AXES
    constexpr int xboxLeftTrigger = 2;
    constexpr int xboxRightTrigger = 3;

    constexpr int xboxLeftAxisX = 0;
    constexpr int xboxLeftAxisY = 1;
    constexpr int xboxRightAxisX = 4;
    constexpr int xboxRightAxisY = 5;
    }