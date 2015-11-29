//
//  turn_base.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef turn_base_hpp
#define turn_base_hpp

#include <stdio.h>

class Turn_Base
{
public:
    Turn_Base();
    ~Turn_Base();
    
    void ApplyTurn();
};

#endif /* turn_base_hpp */
