/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-dc-motor
 */

// constants won't change
// const int ENA_PIN = 9; // the Arduino pin connected to the EN1 pin L298N
const int IN1_PIN = 2; // the Arduino pin connected to the IN1 pin L298N
const int IN2_PIN = 3; // the Arduino pin connected to the IN2 pin L298N

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as outputs.
  // pinMode(ENA_PIN, OUTPUT);
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(IN1_PIN, HIGH); // control motor A spins clockwise
  digitalWrite(IN2_PIN, LOW);  // control motor A spins clockwise

  // for (int speed = 0; speed <= 255; speed++) {
  //   analogWrite(ENA_PIN, speed); // control the speed
  //   delay(10);
  // }

  delay(1000); // rotate at maximum speed 1 seconds in in clockwise direction

  // change direction
  digitalWrite(IN1_PIN, LOW);   // control motor A spins anti-clockwise
  digitalWrite(IN2_PIN, HIGH);  // control motor A spins anti-clockwise

  delay(1000); // rotate at maximum speed 1 seconds in in anti-clockwise direction

  // for (int speed = 255; speed >= 0; speed--) {
  //   analogWrite(ENA_PIN, speed); // control the speed
  //   delay(10);
  // }

  // delay(1000); // stop motor 1 second
}





// int motor1pin1 = 6;
// int motor1pin2 = 9;

// int motor2pin1 = 10;
// int  motor2pin2 = 11;

// void setup() {
//   // put your setup code here, to run once:
//   pinMode(motor1pin1, OUTPUT);
//   pinMode(motor1pin2, OUTPUT);
//   pinMode(motor2pin1,  OUTPUT);
//   pinMode(motor2pin2, OUTPUT);
//   sendToMotorA();   
// 	sendToMotorB(); 


// }

// void loop() {
//   // put your main code here, to run repeatedly:

  
//   digitalWrite(motor1pin1,  HIGH);
//   digitalWrite(motor1pin2, LOW);

//   digitalWrite(motor2pin1, HIGH);
//   digitalWrite(motor2pin2, LOW);
//   delay(3000);

//   digitalWrite(motor1pin1,  LOW);
//   digitalWrite(motor1pin2, HIGH);

//   digitalWrite(motor2pin1, LOW);
//   digitalWrite(motor2pin2, HIGH);
//   delay(3000);
//   setMotorDirectionBackward(motorA);   
// 	setMotorDirectionBackward(motorB); 

// }

// void sendToMotorA()   
// {   
// 	 sendToMotor(motorA, ENA_PIN, IN1_PIN, IN2_PIN);   
// }  


// void sendToMotorB()   
// {   
// 	 sendToMotor(motorB, ENB_PIN, IN3_PIN, IN4_PIN);   
// }   

