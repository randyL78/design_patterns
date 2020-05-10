//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_QUACKBEHAVIOR_H
#define STRATEGY_PATTERN_QUACKBEHAVIOR_H

#include <string>

class QuackBehavior {
public:
    QuackBehavior();
    virtual std::string quack() = 0;
};

QuackBehavior::QuackBehavior() {

}


#endif //STRATEGY_PATTERN_QUACKBEHAVIOR_H
