//
//  necromance.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "necromance.hpp"

Necromance::Necromance(int str, int sta, int agl, int intel) : Ch_Class(str, sta, agl, intel) { }
Necromance::~Necromance() { }

// increment agility
void Necromance::SetPrimaryAttribute()
{
    this->agility = 20;
    this->agility_factor = 8;
}

// slightly increment intelligence
void Necromance::SetSecondaryAttribute()
{
    this->intelligence = 15;
    this->intelligence_factor = 6;
}

// lowel damage
void Necromance::SetWeakness()
{
    this->strength_factor = 3;
}

void Necromance::LevelUp(int level)
{

}
