//
//  mage.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "mage.hpp"

Mage::Mage(int str, int sta, int agl, int intel) : Ch_Class(str, sta, agl, intel) { }
Mage::~Mage() { }

// increment intelligence
void Mage::SetPrimaryAttribute()
{
    this->intelligence = 20;
    this->intelligence_factor = 8;
}

//  increment agility
void Mage::SetSecondaryAttribute()
{
    this->agility = 15;
    this->agility_factor = 6;
}

// lowel strength
void Mage::SetWeakness()
{
    this->strength_factor = 3;
}

void Mage::LevelUp(int level)
{
}