/******************************************************************************

IMU example
Example sketch for testing basic ArduLab functions.
Created by J.G.Aguado
May 29, 2018  
https://github.com/SpaceDIY/ArduLab

This code is released under the [MIT License](http://opensource.org/licenses/MIT).
Please review the LICENSE.md file included with this example. If you have any questions 
or concerns with licensing, please contact jon-garcia@hotmail.com.
Distributed as-is; no warranty is given.

******************************************************************************/
#include <BotMod.h>

BotMod myBot;
void setup(){
    myBot.BotMod_init();
    Serial.begin(9600);
    delay(100);
    Serial.println("Initializing sensor");
}

void loop(){
    float accel[3];
    myBot.Get_Acc(accel);
    
    float mag[3];
    myBot.Get_Mag(mag);
    
    float pitch;
    pitch = myBot.Get_Pitch();
    
    float roll;
    roll = myBot.Get_Roll();

    float heading;
    heading = myBot.Get_Heading();
        
       
    Serial.print("[");
    Serial.print(accel[0]);
    Serial.print(", ");
    Serial.print(accel[1]);
    Serial.print(", ");
    Serial.print(accel[2]);
    Serial.print("],  [");
    Serial.print(mag[0]);
    Serial.print(", ");
    Serial.print(mag[1]);
    Serial.print(", ");
    Serial.print(mag[2]);
    Serial.print("],  [");
    Serial.print(pitch);
    Serial.print(", ");
    Serial.print(roll);
    Serial.print(", ");
    Serial.print(heading);
    Serial.println("],");
    delay(10);
}
