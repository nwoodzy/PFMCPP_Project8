#pragma once

#include "Vehicle.h"
#include <iostream>
#include <limits>

struct Motorcycle : public Vehicle
{
    Motorcycle(const std::string& n);

    ~Motorcycle() override;
    Motorcycle(const Motorcycle&);
    Motorcycle& operator = (const Motorcycle&);
    
    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};
