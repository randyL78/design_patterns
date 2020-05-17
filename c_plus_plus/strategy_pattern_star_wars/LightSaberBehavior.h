//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_STAR_WARS_LIGHTSABERBEHAVIOR_H
#define STRATEGY_PATTERN_STAR_WARS_LIGHTSABERBEHAVIOR_H


#include "WeaponBehavior.h"

class LightSaberBehavior : public WeaponBehavior {
public:
    LightSaberBehavior() {};
    ~LightSaberBehavior() {};
    virtual void useWeapon() override;
};


#endif //STRATEGY_PATTERN_STAR_WARS_LIGHTSABERBEHAVIOR_H
