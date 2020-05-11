//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_FLYNOWAY_H
#define STRATEGY_PATTERN_FLYNOWAY_H

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior {
public:
    FlyNoWay() {};
    std::string fly() override;
};


#endif //STRATEGY_PATTERN_FLYNOWAY_H
