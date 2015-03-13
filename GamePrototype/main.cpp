/*
 * Game Prototype
 *
 */

#include <iostream>
#include <string>
#include <sstream>
#include "Game.h"


int main()
{
    // Variables
    Game game;
    std::string command;

    // Introduction Message
    game.Initialise();
    std::cout << "Game Prototype" << std::endl;
    std::cout << "Version 0.0.1A" << std::endl << std::endl;
    std::cout << "Type help for commands" << std::endl << std::endl;


    while(true) {

        // Get user commands
        std::cout << std::endl <<  ">> ";
        std::getline (std::cin, command);
        // Empty check
        if(command.empty())
            continue;

        // Split up user input by spaces
        std::istringstream buf(command);
        std::istream_iterator<std::string> beg(buf), end;
        std::vector<std::string> tokens(beg, end);
        command = tokens[0];

        // Help command
        if(command == "help") {
            std::cout << "Commands: quit, help, areas, whereami, examine, goto <area>, stats " << std::endl;

        // Areas command
        } else if(command == "areas") {

            // TODO: Add error checking here
            auto areaList = game.locations[game.player->GetLocation()].GetLinkedLocations();
            for (auto it=areaList.begin(); it!=areaList.end(); ++it)
                std::cout << (*it) << ", ";
            std::cout << std::endl;

        } else if(command == "goto") {

            // Sanity check to see if more then two arguments were entered
            if(tokens.size() < 2) {
                std::cout << "Invalid number of perimeters." << std::endl;
                continue;
            }


            // TODO: Add error checking here.
            // THis searches locations for a match then attempts to travel the player there!
            bool playerTraveled = false;
            auto areaList = game.locations[game.player->GetLocation()].GetLinkedLocations();
            for (auto it=areaList.begin(); it!=areaList.end(); ++it)
               if((*it) == tokens[1]) {
                   playerTraveled = true;
                   game.player->SetLocation(tokens[1]);
               }

            // If it's not on the travel list, the player cannot go there!
            if(!playerTraveled) {
                std::cout << "Cannot travel to that location from here! " << std::endl;
            }

        } else if(command == "quit") {
            break;
        } else if(command == "whereami") {
            std::cout << game.player->GetLocation() << std::endl;
        } else if(command == "examine") {
            std::cout << game.locations[game.player->GetLocation()].GetDescription();
		} else if(command == "stats"){
			game.player->printStats();
        } else {
            std::cout << "Invalid Command!" << std::endl;
        }
    }
    return 0;
}