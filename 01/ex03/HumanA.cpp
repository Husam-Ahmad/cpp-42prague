#include "HumanA.hpp"

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->arma.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapongiven ) : name(name), arma(weapongiven) {
    return ;
}

HumanA::~HumanA() {
    return ;
}