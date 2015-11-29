//
//  ch_list.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef ch_list_hpp
#define ch_list_hpp

#include <iostream>
#include <stdio.h>
#include <vector>

#include "item.hpp"
#include "armour.hpp"
#include "spell.hpp"

template<class T>
class List
{
private:
    std::vector<T> list;
public:
    List();
    ~List();
    
    void Insert(T&);
    void Remove(T&);
    bool IsEmpty();
    T& GetItem(int);
    int Size();
};

#endif /* ch_list_hpp */