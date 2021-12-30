#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include  "ScavTrap.hpp"  
# include <iostream>
# include <string>

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
	public :

	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap( DiamondTrap const & copy);
    DiamondTrap & operator=( DiamondTrap const & a);

	void 	whoAmI(void);

	private:
	
		std::string	_name;
};

#endif