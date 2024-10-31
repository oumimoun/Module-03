#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _HitPoints;
    int _EnergyPoints;
    int _AttackDamage;

public:

    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator= (const ClapTrap& other);
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void);
    void setName(const std::string& name);

    int getHitPoints(void);
    void setHitPoints(int hitpoints);

    int getEnergyPoints(void);
    void setEnergyPoints(int energypoints);

    int getAttackDamage(void);
    void setAttackDamage(int attackdamage);


};


#endif