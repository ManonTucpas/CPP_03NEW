#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    ScavTrap::_name = name;
    ScavTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    ScavTrap::_attackDamage = 20;
	std::cout << "ScavTrap "  << _name << " has been initialized" << std::endl;
	std::cout << "ScavTrap "  << _name << " has " << _hitPoints << " hit points " << std::endl;
	std::cout << "ScavTrap "  << _name << " has " << _energyPoints << " energy points " << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap "  << _name << " has been destructed" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & a)
{
    std::cout << "ScavTrap: Assignation operator called: " << getName() << " is now " << a.getName() << std::endl;
    setName(a._name);
    setHP(a._hitPoints);
    setEP(a._energyPoints);
    setAD(a._attackDamage);
    return *this;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) : ClapTrap()
{
    *this = copy;
    std::cout << "ScavTrap: " << getName() << " has been copied" << std::endl;
    return ;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode"  << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrapTrap "  << _name << " Hitpoints before attack : " << _hitPoints << std::endl;
	ScavTrap::_hitPoints -= ScavTrap::_attackDamage;
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage! " << std::endl;
	std::cout << "ScavTrapTrap "  << _name << " Hitpoints after attack : " << _hitPoints << std::endl;
	return ;
}

