//
//  npc_boss.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef npc_boss_hpp
#define npc_boss_hpp

#include <stdio.h>
#include <string>

#include "npc.hpp"

class NPC_Boss : public NPC
{
public:
    
    NPC_Boss(std::string);
    ~NPC_Boss();
    
    int Attack();       // return the damage
};

#endif /* npc_boss_hpp */
