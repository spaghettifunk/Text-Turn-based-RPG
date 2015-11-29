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
    int lifetime = 100;
    
public:
    Weapon();
    Weapon(std::string);
    ~Weapon();
    
    Weapon& operator=(const Weapon&);
};

#endif /* weapon_hpp */
