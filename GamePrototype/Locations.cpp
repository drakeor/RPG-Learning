#include "Locations.h"

Location::Location()
{

}

Location::~Location()
{

}

Location::Location(std::string parentId, std::string locationId, std::string locName)
    : parentId(parentId), id(locationId), name(locName)
{
    
}

void Location::AddLocationLink( std::string locationId )
{
    location_links.push_back(locationId);
}

std::vector<std::string> Location::GetLinkedLocations()
{
    std::vector<std::string> currentLocations = location_links;
    if(!parentId.empty()) 
        currentLocations.push_back(parentId);
    return currentLocations;
}
