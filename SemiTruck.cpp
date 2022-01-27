#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;

SemiTruck::SemiTruck(const SemiTruck&) = default;

SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;


void SemiTruck::pullOver()
{
    Vehicle::setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}

void SemiTruck::checkSpeed(int s)
{
    if (s > 65)
    {
        std::cout << "gotta slow down!" << std::endl;
    }
    if (s < 65)
    {
        std::cout << "too slow!" << std::endl;
    }
    speed = s;
}
