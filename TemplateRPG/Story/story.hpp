//
//  story.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef story_hpp
#define story_hpp

#include <stdio.h>

#include "dialogs.hpp"

class Story
{
private:
    Dialogs dialogs;
    
public:
    Story();
    ~Story();
    
    void Init();
};

#endif /* story_hpp */
