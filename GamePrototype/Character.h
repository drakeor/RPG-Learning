#ifndef Character_h__
#define Character_h__

/**
 * \fn      Character
 * \brief   This is the base character class in which most living entities
            (Including the player) derive from
 */

class Character
{
public:

    // Constructors and destructors
    Character(std::string charName, std::string location);
    Character();
    ~Character();

    // Basic Field encapsulations
    std::string GetName() const { return name; }
    void SetName(std::string val) { name = val; }
    int GetExperience() const { return experience; }
    void SetExperience(int val) { experience = val; }
    int GetCurrentHp() const { return currentHp; }
    void SetCurrentHp(int val) { currentHp = val; }
    int GetBaseWisdom() const { return baseWisdom; }
    void SetBaseWisdom(int val) { baseWisdom = val; }
    int GetBaseStrength() const { return baseStrength; }
    void SetBaseStrength(int val) { baseStrength = val; }
    int GetBaseVitality() const { return baseVitality; }
    void SetBaseVitality(int val) { baseVitality = val; }
    int GetBaseSpeed() const { return baseSpeed; }
    void SetBaseSpeed(int val) { baseSpeed = val; }
    int GetBaseIntelligence() const { return baseIntelligence; }
    void SetBaseIntelligence(int val) { baseIntelligence = val; }
    int GetBaseCharisma() const { return baseCharisma; }
    void SetBaseCharisma(int val) { baseCharisma = val; }
    std::string GetLocation() const { return location; }
    void SetLocation(std::string val) { location = val; }

	void printStats();
	void levelUp();
	void addExperience(int gainedExperience);

protected:
    
    // Derived accessible classes
    std::string name;
    std::string location;

private:
    // Initialise default values
    void Setup();

    // Character information
    int level, experience, levelExperience;
    int currentHp, maxHp;
    
    // Base Stat variables
    int baseStrength;
    int baseVitality;
    int baseSpeed;
    int baseIntelligence;
    int baseCharisma;
    int baseWisdom;
    
};

#endif // Character_h__