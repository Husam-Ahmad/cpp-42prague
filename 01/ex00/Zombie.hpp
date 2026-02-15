#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP 


class Zombie {
    private:
        std::string name;

    public:
        Zombie* newZombie( std::string name );
        void announce( void );
        void randomChump( std::string name );
        std::string getName();
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};
#endif