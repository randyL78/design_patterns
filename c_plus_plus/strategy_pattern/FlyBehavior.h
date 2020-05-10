//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_FLYBEHAVIOR_H
#define STRATEGY_PATTERN_FLYBEHAVIOR_H


#include <iostream>

class FlyBehavior {
public:
    virtual std::string fly() = 0;
};

#endif //STRATEGY_PATTERN_FLYBEHAVIOR_H
