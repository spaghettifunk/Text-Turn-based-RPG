//
//  weapon.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "weapon.hpp"

Weapon::Weapon(std::string n) : name(n) { }
Weapon::~Weapon(){ }

Weapon::Weapon(const Weapon& w)
{
    // update values here
    this->w_type = w.w_type;
    this->name = w.name;
    this->duration = w.duration;
    this->duration_factor = w.duration_factor;
}

Weapon& Weapon::operator=(const Weapon& w)
{
    if(this == &w)
        return *this;
    
    // update values here
    name = w.name;
    
    return *this;
}

void Weapon::SetDuration(int d)
{
    int temp = duration - d;
    if (temp <= 0) {
        // armour broken
    }
    else {
        this->duration = temp;
    }
}

void Weapon::SetDurationFactor(int factor) { this->duration_factor = factor; }
void Weapon::SetName(std::string name) { this->name = name; }
void Weapon::SetType(WeaponType t) { this->w_type = t; }