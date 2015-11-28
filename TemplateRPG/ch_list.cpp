//
//  ch_list.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "ch_list.hpp"

template<> List<Item>::List()
{
    head = nullptr;
    tail = nullptr;
}

template<> List<Armour>::List()
{
    head = nullptr;
    tail = nullptr;
}

template<> List<Item>::~List()
{
    Item* curr_item = this->head; // initialize current node to root
    while (curr_item != nullptr)
    {
        Item* next_item = curr_item->Next();   // get next node
        delete curr_item; // delete current
        curr_item = next_item; // set current to "old" next
    }
}

template<> List<Armour>::~List()
{
    Armour* curr_item = this->head; // initialize current node to root
    while (curr_item != nullptr)
    {
        Armour* next_item = curr_item->Next();    // get next node
        delete curr_item;                         // delete current
        curr_item = next_item;                     // set current to "old" next
    }
}

template<> void List<Item>::add(Item &) { }
template<> void List<Armour>::add(Armour &) { }

template<> void List<Item>::remove(Item &) { }
template<> void List<Armour>::remove(Armour &) { }

template<> int List<Item>::size() { return 0; }
template<> int List<Armour>::size() { return 0; }
