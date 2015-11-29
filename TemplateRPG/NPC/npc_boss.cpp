//
//  npc_boss.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "npc_boss.hpp"

NPC_Boss::NPC_Boss(std::string n) : NPC(n) { }
NPC_Boss::~NPC_Boss() { }

int NPC_Boss::Attack() { return 30; }
