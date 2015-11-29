//
//  warrior.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "warrior.hpp"

Warrior::Warrior(int str, int sta, int agl, int intel) : Ch_Class(str, sta, agl, intel) { }
Warrior::~Warrior() { }

// increase strength
void Warrior::SetPrimaryAttribute()
{
    this->strength = 20;
    this->strength_factor = 8;
}

// slightly increase stamina
void Warrior::SetSecondaryAttribute()
{
    this->stamina = 15;
    this->stamina_factor = 6;
}

// lower XP increase
void Warrior::SetWeakness()
{
    this->xp_gain_factor = 3;
}

void Warrior::LevelUp(int level)
{
    // unlock stuff
}