#ifndef CPP_MODULES_42_FRAGTRAP_HPP
#define CPP_MODULES_42_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    private:

    public:
        FragTrap( std::string );
        FragTrap( const FragTrap& frag );
        FragTrap& operator = ( const FragTrap& frag);
        ~FragTrap( void );
        void attack(const std::string& target);
        void highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &out, const FragTrap &frag);

#endif 