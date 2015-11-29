//
//  armour.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "armour.hpp"

Armour::Armour(std::string n) : name(n) { }
Armour::~Armour() { }

Armour::Armour(const Armour& a)
{
    // update values here
    this->name = a.name;
    this->duration = a.duration;
    this->duration_factor = a.duration_factor;
    this->body_part = a.body_part;
}

bool operator==(const Armour& it1, const Armour& it2)
{
    return it1.name == it2.name;
}

bool operator!=(const Armour& it1, const Armour& it2)
{
    return it1.name != it2.name;
}

Armour& Armour::operator=(const Armour& piece)
{
    if (this == &piece)
        return *this;
    
    // update values here
    name = piece.name;
    
    return *this;
}

void Armour::SetDuration(int d)
{
    int temp = duration - d;
    if (temp <= 0) {
        // armour broken
    }
    else {
        this->duration = temp;
    }
}

void Armour::SetDurationFactor(int factor) { this->duration_factor = factor; }
void Armour::SetName(std::string name) { this->name = name; }
void Armour::SetPart(Part p) { this->body_part = p; }
void Armour::SetDefenseFactor(int df) { this->defense_factor = df; }
