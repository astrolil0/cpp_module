#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setVar(name,100,50,20);
    std::cout << this->getName() <<": ScavTrap Constructor call\n";
}
ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}
ScavTrap::~ScavTrap()
{
    std::cout << this->getName() << ": ScavTrap Destructor call\n";
}
ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    this->setVar(copy.getName(), copy.getHitPoint(),copy.getEnergyPoint(),copy.getAttackDamage());
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0)
        return ;
    if (this->energyPoint <= 0)
    {
        std::cout << "ScavTrap " << this->name <<  " does not have any energy points to attack" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoint = this->energyPoint - 1;
}

void ScavTrap::guardGate()
{
    std::cout << getName() << " ScavTrap is now in Gatekeeper mode.\n";
}