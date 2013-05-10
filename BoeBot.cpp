#include "BoeBot.h" 


BoeBot::BoeBot()
{
}

void BoeBot::initialize(int b, int t) 
{
  babord.attach(b);  
  tribord.attach(t); 
}

void BoeBot::moveForward() 
{
  babord.write(180);                   
  tribord.write(0); 
}
 
void BoeBot::moveBackward() 
{
  babord.write(00);                   
  tribord.write(180); 
}

void BoeBot::turnLeft() 
{
  babord.write(0);                   
  tribord.write(0); 
}

void BoeBot::turnRigth() 
{
  babord.write(180);                   
  tribord.write(180); 
}

void BoeBot::freeze() 
{
  babord.write(90);                   
  tribord.write(90); 
}

 