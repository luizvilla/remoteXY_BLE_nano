#include <Arduino.h>

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
//#define REMOTEXY__DEBUGLOGS Serial

// // RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__BLE_NANO

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600


// ----------------------------------------------------------------------------

// RemoteXY configurate  
// #pragma pack(push, 1)
// uint8_t RemoteXY_CONF[] =
//   { 255,0,0,1,0,30,0,11,13,0,
//   66,130,36,19,24,19,2,26,129,0,
//   39,10,18,6,17,77,111,116,111,114,
//   32,83,112,101,101,100,0 };
  
// // this structure defines all the variables and events of your control interface 
// struct {

//     // output variables
//   int8_t motor_speed; // =0..100 level position 

//     // other variable
//   uint8_t connect_flag;  // =1 if wire connected, else =0 

// } RemoteXY;
// #pragma pack(pop) 

// // // RemoteXY configurate  
// #pragma pack(push, 1)
// uint8_t RemoteXY_CONF[] =
//   { 255,1,0,0,0,11,0,11,13,0,
//   4,0,16,20,7,18,2,26 };
  
// // this structure defines all the variables and events of your control interface 
// struct {

//     // input variables
//   int8_t slider_1; // =0..100 slider position 

//     // other variable
//   uint8_t connect_flag;  // =1 if wire connected, else =0 

// } RemoteXY;
// #pragma pack(pop) 

// // RemoteXY configurate  
// #pragma pack(push, 1)
// uint8_t RemoteXY_CONF[] =
//   { 255,1,0,0,0,20,0,11,13,0,
//       2,0,39,28,22,11,2,26,
//       31,31,79,78,0,79,70,70,0 };
  
// // this structure defines all the variables and events of your control interface 
// struct {

//     // input variables
//   uint8_t switch_1; // =1 if switch ON and =0 if OFF 

//     // other variable
//   uint8_t connect_flag;  // =1 if wire connected, else =0 

// } RemoteXY;
// #pragma pack(pop)


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,5,0,0,0,38,0,11,13,0,
  5,0,58,10,39,39,2,26,31,5,
  0,3,9,40,40,2,26,31,2,0,
  33,55,35,5,2,26,31,31,79,78,
  0,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  int8_t joystick_1_x; // =-100..100 x-coordinate joystick position 
  int8_t joystick_1_y; // =-100..100 y-coordinate joystick position 
  int8_t joystick_2_x; // =-100..100 x-coordinate joystick position 
  int8_t joystick_2_y; // =-100..100 y-coordinate joystick position 
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop) 
/////////////////////////////////////////////
//           END RemoteXY include          //
///////////////////////////////////////////// 


void setup() {
  // put your setup code here, to run once:

  // Serial.begin(9600);
  Serial.println("INITIALIZING");

  RemoteXY_Init ();  

}

uint16_t counter_time = 0;
uint16_t counter_limit = 2000;
uint8_t counter_motor_speed = 0;

void loop() {

  RemoteXY_Handler ();

  // RemoteXY.motor_speed = counter_motor_speed;  //sends the motor speed

  // counter_time++;
  
  // if(counter_time>counter_limit) {
  //   counter_motor_speed++;
  //   if (counter_motor_speed>100) counter_motor_speed = 0; 
  //   counter_time = 0;
  // }

  // put your main code here, to run repeatedly:
}
