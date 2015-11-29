//
//  weapon.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "weapon.hpp"

Weapon& Weapon::operator=(const Weapon& w)
{
    if(this == &w)
        return *this;
    
    // update values here
    name = w.name;
    
    return *this;
}