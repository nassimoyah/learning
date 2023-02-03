#include "definitions.h"

#define  motor_speed  80  /////////// 90 for both as default
void move_forward(){
digitalWrite(dir1_motor_left ,HIGH);
digitalWrite(dir2_motor_left ,LOW);
digitalWrite(dir1_motor_right ,HIGH);
digitalWrite(dir2_motor_right ,LOW);
analogWrite(motor_left,motor_speed );
analogWrite(motor_right,motor_speed+20);

}
void move_backward(){
digitalWrite(dir1_motor_left ,LOW);
digitalWrite(dir2_motor_left ,HIGH);
digitalWrite(dir1_motor_right ,LOW);
digitalWrite(dir2_motor_right ,HIGH);
analogWrite(motor_left,motor_speed);
analogWrite(motor_right,motor_speed);

}
void turn_right() {
 digitalWrite(dir1_motor_left ,HIGH);
digitalWrite(dir2_motor_left ,LOW);
digitalWrite(dir1_motor_right ,LOW);
digitalWrite(dir2_motor_right ,LOW);
analogWrite(motor_left,0);
analogWrite(motor_right,0);


}
void turn_left() {
digitalWrite(dir1_motor_left ,LOW);
digitalWrite(dir2_motor_left ,LOW);
digitalWrite(dir1_motor_right ,HIGH);
digitalWrite(dir2_motor_right ,LOW);
analogWrite(motor_left,0);
analogWrite(motor_right,0);

}
void stopp(){
digitalWrite(dir1_motor_left ,LOW);
digitalWrite(dir2_motor_left ,LOW);
digitalWrite(dir1_motor_right ,LOW);
digitalWrite(dir2_motor_right ,LOW);
analogWrite(motor_left,0);
analogWrite(motor_right,0);
    
}
void pinmode(){
pinMode(dir1_motor_left ,OUTPUT);
pinMode(dir2_motor_left ,OUTPUT);
pinMode(dir1_motor_right ,OUTPUT);
pinMode(dir2_motor_right ,OUTPUT); 
pinMode(motor_left ,OUTPUT); 
pinMode(motor_right ,OUTPUT);
pinMode(ir_left,INPUT);
pinMode(ir_right,INPUT);

//pinMode(col_in,INPUT);
pinMode(servo1,OUTPUT);
//pinMode(servo2,OUTPUT);
pinMode(servo3,OUTPUT);
}
