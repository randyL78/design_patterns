//
// Created by Randy Layne on 5/10/20.
//

#ifndef STRATEGY_PATTERN_STAR_WARS_STARWARSCHARACTER_H
#define STRATEGY_PATTERN_STAR_WARS_STARWARSCHARACTER_H


#include <string>

#include "WeaponBehavior.h"

class StarWarsCharacter
{
public:
    StarWarsCharacter(std::string name, WeaponBehavior * weaponBehavior);
    ~StarWarsCharacter() {};

    void Fight() { m_pWeaponBehavior->useWeapon(); }

    void SetWeaponBehavior(WeaponBehavior * weaponBehavior)
    { m_pWeaponBehavior = weaponBehavior; }

protected:
    WeaponBehavior * m_pWeaponBehavior;
    std::string m_name;
};


#endif //STRATEGY_PATTERN_STAR_WARS_STARWARSCHARACTER_H
