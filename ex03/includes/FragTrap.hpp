
#ifndef _FRAGTRAP_HPP 
#define _FRAGTRAP_HPP 

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap
{
	public :

	FragTrap(std::string name);
	~FragTrap(void);
    FragTrap( FragTrap const & copy);
    FragTrap & operator=( FragTrap const & a);

	void    highFivesGuys(void);
	void	attack(std::string const & target);
};

#endif