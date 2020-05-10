//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_QUACKER_H
#define STRATEGY_PATTERN_QUACKER_H

#include <string>
#include "QuackBehavior.h"

class Quacker: public QuackBehavior {
public:
    Quacker();
    std::string quack() override;
};


#endif //STRATEGY_PATTERN_QUACKER_H
