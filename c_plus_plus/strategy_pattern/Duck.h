//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_DUCK_H
#define STRATEGY_PATTERN_DUCK_H


#include <iostream>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
protected:
    /**
    * Default constructor
    */
    Duck();
    Duck(FlyBehavior *flyBehavior, QuackBehavior *quackBehavior);
    ~Duck() {};
public:
    /**
     * Standard display method for outputting details about a Duck
     * @param outs
     */
    virtual void display(std::ostream &outs) const;

    /**
     * Return a string interpretation of how this duck flies
     * @return
     */
    std::string fly();

    /**
     * Return a string implementation of how this duck quacks
     * @return
     */
    std::string quack();

    /**
     * Sets the type of flying this duck does
     * @param flyBehavior
     */
    void setFlyBehavior(FlyBehavior *flyBehavior);

    /**
     * Sets how this duck quacks
     * @param quackBehavior
     */
    void setQuackBehavior(QuackBehavior *quackBehavior);

protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
};

/**
 * Outputs the the details of a duck using stream insertion operator
 * @param outs
 * @param duck
 * @return
 */
std::ostream& operator<<(std::ostream& outs, const Duck& duck);

#endif //STRATEGY_PATTERN_DUCK_H
