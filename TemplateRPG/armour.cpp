//
//  armour.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "armour.hpp"

Armour::Armour(std::string n) : name(n) { }
Armour::Armour(const Armour& a): name(a.name) { }
Armour::~Armour() { }

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
