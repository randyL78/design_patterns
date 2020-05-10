//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_MUTEQUACK_H
#define STRATEGY_PATTERN_MUTEQUACK_H


#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior {
    MuteQuack() {};
    std::string quack() override;
};


#endif //STRATEGY_PATTERN_MUTEQUACK_H
