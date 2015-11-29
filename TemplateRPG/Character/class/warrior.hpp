//
//  warrior.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef warrior_hpp
#define warrior_hpp

#include <stdio.h>
#include "ch_class.hpp"

class Warrior : public Ch_Class
{
private:
    
public:
    
    Warrior(int, int, int, int);
    ~Warrior();
    
    void SetPrimaryAttribute(); // increase strength
    void SetSecondaryAttribute();   // slightly increase stamina
    void SetWeakness(); // lower XP increase
    void LevelUp(int);
};

#endif /* warrior_hpp */
