//
//  human.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef human_hpp
#define human_hpp

#include <stdio.h>
#include "ch_type.hpp"

class Human : public CH_Type
{
private:
    // special things
public:
    
    Human();
    ~Human();
    
    void LevelUp(int);  // not sure yet
};

#endif /* human_hpp */
