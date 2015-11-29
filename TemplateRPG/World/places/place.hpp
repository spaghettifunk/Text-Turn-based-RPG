//
//  place.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 29/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef place_hpp
#define place_hpp

#include <stdio.h>
#include <string>

class Place
{
private:
    std::string name = "";
    
public:
    Place(std::string);
    Place(const Place&);
    ~Place();
    
    Place& operator=(const Place&);
    
    friend bool operator!=(const Place&, const Place&);
    friend bool operator==(const Place&, const Place&);
    
    // methods
    void SetName(std::string);
    
};

#endif /* place_hpp */