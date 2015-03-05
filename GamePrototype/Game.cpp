#include "Game.h"

Game::Game()
{

}

Game::~Game()
{
    // Destroy the location memory
    //for (auto it=locations.begin(); it!=locations.end(); ++it)
     //   delete (*it).second;
}

void Game::Initialise()
{
    // Setup our locations!
    SetupLocations();

    // Create our player!
    player = std::unique_ptr<Character>(new Character("NoodleDragon", "otterville"));
}

void Game::SetupLocations()
{
    // Otterville!
    /////////////
    AddLocation("otterville", "Otterville", "This is the town I grew up in. I know everyone and everyone knows me.");
    {
        AddLocation("otterville_bar", "Noodle's Bar", "otterville", "A famous scholar named Noodle opened this bar three years ago. Most of the town usually gathers here.");
        AddLocation("otterville_townhall", "Town Hall", "otterville", "This place almost looks like a normal house. The mayor lives here.");
        AddLocation("otterville_home", "My house!", "otterville", "This is my humble little home. I'll pay it off eventually...");
    }
}

void Game::AddLocation( std::string id, std::string realName, std::string description, std::string parentName )
{
    Location tempLocation(parentName, id, realName);
    tempLocation.SetDescription(description);

    locations.insert( std::pair<std::string, Location>(id, tempLocation) );
    // TODO: Add error checking for this
    locations[parentName].AddLocationLink(id);
}



