//
//  armour.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef armour_hpp
#define armour_hpp

#include <stdio.h>

class Armour
{
private:
    Armour *next;
public:
    Armour* Next();
};

#endif /* armour_hpp */
