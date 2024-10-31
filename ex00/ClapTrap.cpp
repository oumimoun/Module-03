#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _HitPoints(10) , _EnergyPoints(10) , _AttackDamage(0) {
    this->_name = name;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other.getName();
        
        // suite
    }
    return *this;
}

std::string ClapTrap::getName(void)
{
    return this->_name;
}

void ClapTrap::setName(const std::string &name)
{
    this->_name =  name;
}

int ClapTrap::getHitPoints()
{
    return this->_HitPoints;
}

void ClapTrap::setHitPoints(int hitpoints)
{
    this->_HitPoints = hitpoints;
}

int ClapTrap::getEnergyPoints()
{
    return this->_EnergyPoints;
}

void ClapTrap::setEnergyPoints(int energypoints)
{
    this->_EnergyPoints = energypoints;
}

