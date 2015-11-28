//
//  armour.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "armour.hpp"

Armour::Armour(const Armour&)
{
    // update values
}

Armour& Armour::operator=(const Armour& piece)
{
    if (this == &piece)
        return *this;
    
    // update values here
    
    return *this;
}
