//
//  spell.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "spell.hpp"

Spell::Spell(std::string n) : name(n) { }
Spell::Spell(const Spell& it): name(it.name) { }
Spell::~Spell() { }

Spell& Spell::operator=(const Spell& item)
{
    if(this == &item)
        return *this;
    
    // update values here
    name = item.name;
    
    return *this;
}

bool operator==(const Spell& it1, const Spell& it2)
{
    return it1.name == it2.name;
}

bool operator!=(const Spell& it1, const Spell& it2)
{
    return it1.name != it2.name;
}