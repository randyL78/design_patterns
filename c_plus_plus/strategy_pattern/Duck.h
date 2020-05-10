//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_DUCK_H
#define STRATEGY_PATTERN_DUCK_H


#include <ostream>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
private:
    FlyBehavior& flyBehavior;
    QuackBehavior& quackBehavior;

public:
    /**
     * Default constructor
     */
    Duck(FlyBehavior &flyBehavior, QuackBehavior &quackBehavior);

    /**
     * Standard display method for outputting details about a Duck
     * @param outs
     */
    void display(std::ostream &outs) const;

    /**
     * Return a string interpretation of how this duck flies
     * @return
     */
    std::string fly();

    /**
     * Return a string interpretaion of how this duck quacks
     * @return
     */
    std::string quack();

    void setFlyBehavior(FlyBehavior &flyBehavior);

    void setQuackBehavior(QuackBehavior &quackBehavior);

};

/**
 * Outputs the the details of a duck using stream insertion operator
 * @param outs
 * @param duck
 * @return
 */
std::ostream& operator<<(std::ostream& outs, const Duck& duck);

#endif //STRATEGY_PATTERN_DUCK_H
