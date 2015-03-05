#ifndef Locations_h__
#define Locations_h__

#include <iostream>
#include <vector>

/**
 * \fn      Location
 * \brief   Each location is defined within a location class.

            Locations will link to each other, and often have a parent.
            Top level locations will always have a parent ID of 0.
 */
class Location
{
public:
    // Constructors and destructors
    Location(std::string parentId, std::string locationId, std::string locName);
    Location();
    ~Location();

    /**
     * \fn      AddLocationLink
     * \brief   Adds a location to list of places you can travel too
     */
    void AddLocationLink(std::string locationId);

    /**
     * \fn      GetLinkedLocations
     * \brief   Returns a list of currently linked locations that are accessible by the player.
                Later on, we can implement logic within this function to determine if the player can travel
                there or not!
     */
    std::vector<std::string> GetLinkedLocations();

    // Encapsulations
    std::string GetDescription() const { return description; }
    void SetDescription(std::string val) { description = val; }

private:
    std::string id;
    std::string parentId;
    std::string name;
    std::string description;
    std::vector<std::string> location_links;

};

#endif // Locations_h__