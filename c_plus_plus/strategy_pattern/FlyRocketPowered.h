//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_FLYROCKETPOWERED_H
#define STRATEGY_PATTERN_FLYROCKETPOWERED_H


#include "FlyBehavior.h"

class FlyRocketPowered : public FlyBehavior {
public:
    FlyRocketPowered() {};

    std::string fly() override;
};


#endif //STRATEGY_PATTERN_FLYROCKETPOWERED_H
