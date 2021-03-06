/******************************************************************************

ArduLab.h
Library for managing ArduLab board.
Created by J.G.Aguado
May 18, 2018  
https://github.com/SpaceDIY/ArduLab

This code is released under the [MIT License](http://opensource.org/licenses/MIT).
Please review the LICENSE.md file included with this example. If you have any questions 
or concerns with licensing, please contact jon-garcia@hotmail.com.
Distributed as-is; no warranty is given.

******************************************************************************/

#ifndef ArduLab_h
#define ArduLab_h
 
#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class ArduLab{
    public:
        ArduLab();
        void RGB(int r, int g, int b);
        void Beep();
		void Play(int note, int duration, int silence=0);
        bool PushButton();
        float Battery();
        int Light();
        void MotorA(int dir);
        void MotorB(int dir);
		void Stepper(int dir, int turns=1, int speed=60);
		void LCDprint(String component, String value, int r=0, int g=0, int b=0);
		void LCD_bar(String component, int value, byte type=0);
		void LCD_text(String component, String value);
		void LCD_backlight(int value);


    private:    	
    	byte _buzzer = 4;
    	byte _red = 13;
    	byte _green = 5;
    	byte _blue = 6;
    	byte _pushbutton = 16;
    	int _battery = A0;
    	int _lum = A5;

    	byte _motor_b_1 = 9;
    	byte _motor_b_2 = 10;
    	byte _motor_a_1 = 11;
    	byte _motor_a_2 = 12;
};
#endif