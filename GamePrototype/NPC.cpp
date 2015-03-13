#include <iostream>
#include "Character.h"
#include "NPC.h"

NPC::NPC()
{

}

NPC::NPC( std::string name, std::string location )
{
    this->name = name;
    this->location = location;
}

NPC::~NPC()
{

}
std::string NPC::GetLocation()
{
    return location;
}
