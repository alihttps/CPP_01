#include "Harl.hpp"

Harl::Harl()
{
}
void Harl::debug( void )
{
    std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void(Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   if (level == "DEBUG")
        (this->*f[0])();
    else if (level == "INFO")
        (this->*f[1])();
    else if (level == "WARNING")
        (this->*f[2])();
    else if (level == "ERROR")
        (this->*f[3])();
    else
        std::cout << "Invalid level" << std::endl;
}

Harl::~Harl()
{
}