#include <iostream>
#include "Character.h"

Character::Character(std::string charName, std::string location) :
    name(charName), location(location)
{
   experience = 0;
   currentHp = 10;
   maxHp = 10;
   baseStrength = baseCharisma = baseIntelligence = baseSpeed = baseVitality = baseWisdom = 1;
}

Character::~Character() 
{

}