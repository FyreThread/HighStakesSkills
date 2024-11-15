/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Alex Caroon                                               */
/*    Created:      10/3/2024, 2:56:54 PM                                     */
/*    Description:  High Stakes 9144G Code (Fun Sold Separately)              */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include <iostream>
using namespace vex;

// Autonomous
void autonomous() {
    Drivetrain.setStopping(coast);
    Drivetrain.setDriveVelocity(50, percent);
    Drivetrain.setTurnVelocity(20, percent);
    intake.spinFor(.5, seconds);
    Drivetrain.driveFor(forward, 11.5, inches);
    wait(.5, sec);
    turnLeftDegrees(90);
    Drivetrain.setDriveVelocity(23, percent);
    mobileRelease();
    Drivetrain.driveFor(reverse, 13, inches);
    mobileGrab();
    wait(.25, seconds);
    Drivetrain.setDriveVelocity(60, percent);
    Drivetrain.driveFor(reverse, 7, inches);
    turnRightDegrees(90);
    intake.spin(forward);
    Drivetrain.driveFor(forward, 43, inches);
    turnRightDegrees(90);
    Drivetrain.driveFor(forward, 17, inches);
    turnRightDegrees(90);
    }

int main() {
    intake.setVelocity(100, percent);
    initalize();
    Competition.autonomous(autonomous);
}