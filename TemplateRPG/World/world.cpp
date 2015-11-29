//
//  world.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "world.hpp"

World::World() { }
World::~World()
{
    free(&this->world_places);
}