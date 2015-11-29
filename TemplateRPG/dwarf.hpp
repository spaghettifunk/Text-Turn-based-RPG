//
//  dwarf.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef dwarf_hpp
#define dwarf_hpp

#include <stdio.h>
#include "ch_type.hpp"

class Dwarf : public CH_Type
{
private:
    // special things
public:
    
    Dwarf();
    ~Dwarf();
    
    void LevelUp(int);
};

#endif /* dwarf_hpp */
