#ifndef Game_h__
#define Game_h__

#include <string>
#include <vector>
#include <map>
#include <memory>

#include "Character.h"
#include "Locations.h"

/**
 * \fn      Game
 * \brief   Holds Game related things. Most of the game logic will exist here
 */
class Game
{
public:

    // Constructor and Destructor
    Game();
    ~Game();

    /**
     * \fn      Initialise
     * \brief   Call this function to set up the initial variables
     */
    void Initialise();

     // List of locations within the game!
    std::map<std::string, Location> locations;
    
    // Our player!
    std::unique_ptr<Character> player;

private:

    /**
     * \fn      Location Functions
     * \brief   The following functions help with location
     */
    void SetupLocations();
    void AddLocation(std::string id, std::string realName, std::string description, std::string parentId = "");
};

#endif // Game_h__