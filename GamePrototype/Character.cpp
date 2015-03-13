#include <iostream>
#include <iomanip>
#include "Character.h"


Character::Character(std::string charName, std::string location) :
    name(charName), location(location)
{
   Setup();
}

Character::Character()
{
    name = "INSERT NAME HERE";
    location = "Invalid";
    Setup();
}

Character::~Character() 
{

}

void Character::Setup()
{
    level = 1;
    experience = 0;
    levelExperience = 100;
    currentHp = 10;
    maxHp = 10;
    baseStrength = baseCharisma = baseIntelligence = baseSpeed = baseVitality = baseWisdom = 1;
}


void Character::addExperience(int experienceGained)
{
	experience += experienceGained;

	if(experience >= levelExperience)
	{
		experience -= levelExperience;
		levelUp();
	}
}

void Character::levelUp()
{
	level++;
	levelExperience += levelExperience;
	//Todo: Stat increases.
	std::cout << "Congratulations, you've reached level " << level << "!" << std::endl;
}

void Character::printStats()
{
	std::cout << "HP: " << currentHp << "/" << maxHp << std::endl;
	std::cout << "Exp To Level: " << levelExperience - experience << std::endl;

	std::cout << std::left;	//Making everything left aligned
	std::cout << std::setw(14) << "Strength: " << std::setw(4) <<  baseStrength << std::endl;
	std::cout << std::setw(14) << "Charisma: " << std::setw(4) <<  baseCharisma << std::endl;
	std::cout << std::setw(14) << "Intelligence: " << std::setw(4) <<  baseIntelligence << std::endl;
	std::cout << std::setw(14) << "Speed: " << std::setw(4) <<  baseSpeed << std::endl;
	std::cout << std::setw(14) << "Vitality: " << std::setw(4) <<  baseVitality << std::endl;
	std::cout << std::setw(14) << "Wisdom: " << std::setw(4) <<  baseWisdom << std::endl;
}
