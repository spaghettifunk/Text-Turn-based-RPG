//
//  orc.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef orc_hpp
#define orc_hpp

#include <stdio.h>
#include "ch_type.hpp"

class Orc : public CH_Type
{
private:
    // special things
public:
    
    Orc();
    ~Orc();
    
    void LevelUp(int);
};

#endif /* orc_hpp */
