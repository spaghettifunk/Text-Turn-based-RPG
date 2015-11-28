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
    class node
    {
        T data;
        node *next;
    public:
        node(T data, node *next = NULL) : data(data), next(next) { }
        node* Next() { return next; }
        T& GetElem() { return data; }
    };
    
    node *head;
    node *tail;
public:
    
    List();
    ~List();
    
    void add(T&);
    void remove(T&);
    int size();
    // etc.
};

#endif /* ch_list_hpp */