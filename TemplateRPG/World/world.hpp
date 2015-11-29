//
//  world.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef world_hpp
#define world_hpp

#include <stdio.h>

#include "ch_list.hpp"
#include "place.hpp"

class World
{
protected:
    List<Place> world_places;
};

#endif /* world_hpp */
