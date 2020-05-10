//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_FLYWITHWINGS_H
#define STRATEGY_PATTERN_FLYWITHWINGS_H


#include "FlyBehavior.h"

class FlyWithWings: public FlyBehavior {
public:
    explicit FlyWithWings();

    std::string fly() override;
};


#endif //STRATEGY_PATTERN_FLYWITHWINGS_H
