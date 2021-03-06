#ifndef __WOOD_STAIN_HDR__
#define __WOOD_STAIN_HDR__

#include "Arduino.h"
#include "pins.h"

#define VERTICAL    0
#define HORIZONTAL  1

// Vertical distance between each stroke
#define STROKE_GAP          3000
#define LIMIT                 -1
#define MOTOR_REST          1000 // One second between the motions of a motor

#define HORIZONTAL_STROKE_GAP 3000
#define VERTICAL_STROKE_GAP 3000

// The range within which both sprays work
// Below MIN only the top spray works
// Above MAX only the bottom spray works
#define MIN                 2
#define MAX                 15

// Milliseconds to wait after a change in limit switch state
#define DEBOUNCE_TIME       150
#define MOTOR_SWITCH_DELAY  3000 // Wait 3 seconds after switching off the motor

// Microseconds between each step
#define HORIZONTAL_STEPPER_MIN_DELAY  150
#define HORIZONTAL_STEPPER_MAX_DELAY  1600
#define HORIZONTAL_STEPPER_START_GAP  600

// The directions that lead the paint head towards the left and right
#define LEFT_DIRECTION      1
#define RIGHT_DIRECTION     0

// Indicator LED pin
#define STATUS_LED          13

// Solenoid pins
#define TOP_SPRAY           34
#define BOTTOM_SPRAY        35

// Induction motor pins
#define HORIZONTAL_SPEED          0
#define VERTICAL_SPEED            1

// Stepper motor pins
#define HORIZONTAL_STEPPER_DIRECTION    STP_1_DIR
#define HORIZONTAL_STEPPER_STEP         STP_1_STP
#define HORIZONTAL_STEPPER_ENABLE       STP_1_EN

// Limit switch pins
#define TOP_LIMIT           LM_1
#define BOTTOM_LIMIT        LM_4
#define LEFT_LIMIT          LM_3
#define RIGHT_LIMIT         LM_2

#define LED   50

#define goLeft(delay) digitalWrite(HORIZONTAL_STEPPER_DIRECTION, LEFT_DIRECTION);\
                digitalWrite(HORIZONTAL_STEPPER_STEP, 1);\
                delayMicroseconds(delay);\
                digitalWrite(HORIZONTAL_STEPPER_STEP, 0);\
                delayMicroseconds(delay);

#define goRight(delay) digitalWrite(HORIZONTAL_STEPPER_DIRECTION, RIGHT_DIRECTION);\
                digitalWrite(HORIZONTAL_STEPPER_STEP, 1);\
                delayMicroseconds(delay);\
                digitalWrite(HORIZONTAL_STEPPER_STEP, 0);\
                delayMicroseconds(delay);

#define horizontalOff { digitalWrite (HORIZONTAL_STEPPER_ENABLE, HIGH); }
#define horizontalOn { digitalWrite (HORIZONTAL_STEPPER_ENABLE, LOW); }

#define UP      0
#define DOWN    1
#define LEFT    2
#define RIGHT   3

// #define HORIZONTAL  0
// #define VERTICAL    1
// #define NONE        2

#endif
