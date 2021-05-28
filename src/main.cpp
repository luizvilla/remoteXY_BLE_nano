#include <Arduino.h>

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__HARDSERIAL

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,0,0,1,0,30,0,11,13,0,
  66,130,41,26,20,16,2,26,129,0,
  42,21,18,3,17,77,111,116,111,114,
  32,83,112,101,101,100,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // output variables
  int8_t pwm_out; // =0..100 level position 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
///////////////////////////////////////////// 


void setup() {
  // put your setup code here, to run once:
   RemoteXY_Init ();  

  Serial.begin(9600);
  Serial.println("INITIALIZING");
}

void loop() {

  RemoteXY_Handler (); 
  RemoteXY.pwm_out = 10;


  // put your main code here, to run repeatedly:
}