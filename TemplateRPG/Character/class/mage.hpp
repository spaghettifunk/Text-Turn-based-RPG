//
//  mage.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef mage_hpp
#define mage_hpp

#include <stdio.h>
#include "ch_class.hpp"

class Mage : public Ch_Class
{
private:
    
public:
    
    Mage(int, int, int, int);
    ~Mage();
    
    void SetPrimaryAttribute(); // increment intelligence
    void SetSecondaryAttribute();   //  increment agility
    void SetWeakness(); // lowel strength
    void LevelUp(int);
};

#endif /* mage_hpp */
