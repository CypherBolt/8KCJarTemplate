using namespace vex;

extern brain Brain;

extern controller ControllerMain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern motor leftMotorLB;
extern motor leftMotorLF;
extern motor rightMotorRB;
extern motor rightMotorRF;
extern motor leftMotorLT1;
extern motor rightMotorRT1;
extern motor intakeBottom;
extern motor outtake;



extern digital_out scraper;
extern digital_out descorer;
extern digital_out middle;



void  vexcodeInit( void );