//
//  weapon.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef weapon_hpp
#define weapon_hpp

#include <stdio.h>
#include <string>

class Weapon
{
private:
    std::string name = "";
    
public:
    Weapon& operator=(const Weapon&);
};

#endif /* weapon_hpp */
