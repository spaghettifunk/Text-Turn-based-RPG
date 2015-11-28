//
//  ch_list.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef ch_list_hpp
#define ch_list_hpp

#include <stdio.h>

#include "item.hpp"
#include "armour.hpp"

template <class T>
class List
{
private:
    T *head;
    T *tail;
public:
    List();
    ~List();
    
    void add(T&);
    void remove(T&);
    int size();
};

#endif /* ch_list_hpp */
