#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	_name = name;

	this->_hitPoints = getAD();//FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap "  << _name << " has been initialized" << std::endl;
	std::cout << "DiamondTrap "  << _name << " has " << _hitPoints << " hit points " << std::endl;
	std::cout << "DiamondTrap "  << _name << " has " << _energyPoints << " energy points " << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap "  << _name << " has been destructed" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & a)
{
    std::cout << "DiamondTrap: Assignation operator called: " << getName() << " is now " << a.getName() << std::endl;
    _name  = a._name;
    setHP(a._hitPoints);
    setEP(a._energyPoints);
    setAD(a._attackDamage);
    return *this;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) : ClapTrap(), FragTrap(), ScavTrap()
{
    *this = copy;
    std::cout << "DiamondTrap: " << getName() << " has been copied" << std::endl;
    return ;
}


void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	return ;
}

void 	DiamondTrap::whoAmI(void)
{
    std::cout << "Name from DiamondTrap class : " << _name << std::endl;
    std::cout << "Name from ClassTrap class : " << ClapTrap::_name << std::endl;
    return;
}

void    DiamondTrap::highFivesGuys(void)
{
    FragTrap::highFivesGuys();
    return ;
}

void   	DiamondTrap::guardGate(void)
{
    ScavTrap::guardGate();
    return ;
}