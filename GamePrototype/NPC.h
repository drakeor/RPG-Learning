#ifndef NPC_h__
#define NPC_h__

/**
 * \fn      NPC
 * \brief   An expansion of the character class that represents a computer controlled player.
 */

class NPC : public Character 
{
public:
    NPC();
    NPC(std::string name, std::string location);
    ~NPC();
    std::string GetLocation();

private:
};

#endif // NPC_h__