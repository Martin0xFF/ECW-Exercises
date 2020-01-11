//You will need to determine the wiring based on the pins listed in file
// Don't forget about Vcc and Gnd
#define TRIGGER_PIN  7
#define ECHO_PIN     8
#define SERVO_PIN    3

#define MAX_DISTANCE 200
#define BUFFERSIZE 6
#include <NewPing.h>
#include <Servo.h>     

// To use the above libraries you will need to read their documentation

Servo serv;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
     
void setup() {
    //attach the SERVO_PIN to serv
    //Initialize the position of serv to be 0 degrees
    Serial.begin(115200);
    }

     //data will be printed in the format (angle, distance)
void loop() {
    int mAngle = 0;
    int xAngle = 75;
    int distance = 0;
    for (int angle=mAngle; angle<xAngle; angle= angle + 5){
      distance = noFilterMoveRead(angle);
      Serial.print(angle);
      Serial.print(",");
      Serial.print(distance);  
      Serial.print("\n");
      delay(50);
    }

    for (int angle=xAngle; angle>mAngle ; angle= angle - 5){
      distance = noFilterMoveRead(angle);
      Serial.print(angle);
      Serial.print(",");
      Serial.print(distance);  
      Serial.print("\n");
      delay(50);
    }
    
  }

int noFilterMoveRead(int angle){
    //Turn the servo
    //read the distance from the ultrasonic sensor
    //return the value
    delay(10);
    
}

// If you were to plot the distance data you would notice that it is noisy
// to combat noise you can apply a filter to the data
int FilteredMoveRead(int angle){
    //Turn the servo
    //read the distance from the ultrasonic sensor
    //Implement a running average or exponential filter (or a Kalman Filter)
} 
