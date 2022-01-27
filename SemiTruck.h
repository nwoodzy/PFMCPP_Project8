#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    void pullOver();
    void setSpeed( int s );
};

