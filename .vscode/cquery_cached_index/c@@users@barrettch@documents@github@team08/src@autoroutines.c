// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"

void compAutoRedRight(){
  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
           // turn at seed 30 for 90 degree angle right turn
    pivotTurn(1, 37, 90);            // turn at seed 30 for 90 degree angle left turn
    driveForDistancePID(14, 60);
    pivotTurn(0, 37, 76);     // for 10 meter = 394" at speed 60
    driveForDistancePID(80, 120);

    liftMove(75);
    delay(3500);
    liftMove(0);

    driveForDistancePID(25, 100);   // on first platform

    liftMove(-75);                  //bring arm back forward
    delay(1250);
    liftMove(0);

    delay(1000);
    driveForDistancePID(20, 100);   // front wheels on the top platform

    liftMove(75);                   // hoist back up
    delay(2000);
    liftMove(0);

    driveForDistancePID(5, 75);    // drive up on top platform

    delay(750);                     //bring arm back down
    liftMove(-75);
    delay(3250);
    liftMove(0);

    delay(10000);
    pivotTurn(1, 95, 1440);        //Victory Lap



   // angle = ticks/degree for potentiometer move
   // get current potetniometer value


}

void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
