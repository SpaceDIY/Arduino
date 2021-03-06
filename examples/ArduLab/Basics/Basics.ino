/******************************************************************************

Basics example
Example sketch for testing basic ArduLab functions.
Created by J.G.Aguado
May 18, 2018  
https://github.com/SpaceDIY/ArduLab

This code is released under the [MIT License](http://opensource.org/licenses/MIT).
Please review the LICENSE.md file included with this example. If you have any questions 
or concerns with licensing, please contact jon-garcia@hotmail.com.
Distributed as-is; no warranty is given.

******************************************************************************/

#include <ArduLab.h>

ArduLab myArduLab;

void setup(){

}

void loop(){
    myArduLab.Beep();
    myArduLab.RGB(0,0,100);
}