#include <iostream>
#include <iomanip>
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

void Character::printStats()
{
	std::cout << "HP: " << currentHp << "/" << maxHp << std::endl;
	std::cout << "Exp: " << experience << std::endl;
	std::cout << std::left;
	std::cout << std::setw(14) << "Strength: " << std::setw(4) <<  baseStrength << std::endl;
	std::cout << std::setw(14) << "Charisma: " << std::setw(4) <<  baseCharisma << std::endl;
	std::cout << std::setw(14) << std::left << "Intelligence: " << std::setw(4) <<  baseIntelligence << std::endl;
	std::cout << std::setw(14) << std::left << "Speed: " << std::setw(4) <<  baseSpeed << std::endl;
	std::cout << std::setw(14) << std::left << "Vitality: " << std::setw(4) <<  baseVitality << std::endl;
	std::cout << std::setw(14) << std::left << "Wisdom: " << std::setw(4) <<  baseWisdom << std::endl;
}