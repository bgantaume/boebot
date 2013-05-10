#include <BoeBot.h>
BoeBot bot;

void setup() 
{ 
  bot.initialize(11, 10);
} 
 
void loop() 
{ 
  bot.freeze();           
  delay(2000);
  bot.moveForward();
  delay(300);
  bot.moveBackward();
  delay(300);
  bot.turnLeft();
  delay(300);
  bot.turnRigth();
  delay(300);
} 