//
//  ch_list.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "ch_list.hpp"

// ****************************************************************************************************
// ITEM
// ****************************************************************************************************
template<>
List<Item>::List() { }

template<>
List<Item>::~List() { }

template<>
void List<Item>::Insert(Item& item) {
    list.push_back(item);
}

template<>
void List<Item>::Remove(Item& item)
{
    int index = -1;
    for(std::vector<int>::size_type i = 0; i != list.size(); i++) {
        Item temp = list[i];
        if (temp == item) {
            index = (int)i;
            break;
        }
    }
    
    list.erase(list.begin() + index);
}

template<>
bool List<Item>::IsEmpty() { return list.empty(); }

template<>
int List<Item>::Size() { return (int)list.size(); }

template<>
Item& List<Item>::GetItem(int index) { return list[index]; }

// ****************************************************************************************************
// ARMOUR
// ****************************************************************************************************
template<>
List<Armour>::List() { }

template<>
List<Armour>::~List() { }

template<>
void List<Armour>::Insert(Armour& item) { list.push_back(item); }

template<>
void List<Armour>::Remove(Armour& item)
{
    int index = -1;
    for(std::vector<int>::size_type i = 0; i != list.size(); i++) {
        Armour temp = list[i];
        if (temp == item) {
            index = (int)i;
            break;
        }
    }
    
    list.erase(list.begin() + index);
}

template<>
bool List<Armour>::IsEmpty() { return list.empty(); }

template<>
int List<Armour>::Size() { return (int)list.size(); }

template<>
Armour& List<Armour>::GetItem(int index) { return list[index]; }

// ****************************************************************************************************
// SPELL
// ****************************************************************************************************
template<>
List<Spell>::List() { }

template<>
List<Spell>::~List() { }

template<>
void List<Spell>::Insert(Spell& item) {
    list.push_back(item);
}

template<>
void List<Spell>::Remove(Spell& item)
{
    int index = -1;
    for(std::vector<int>::size_type i = 0; i != list.size(); i++) {
        Spell temp = list[i];
        if (temp == item) {
            index = (int)i;
            break;
        }
    }
    
    list.erase(list.begin() + index);
}

template<>
bool List<Spell>::IsEmpty() { return list.empty(); }

template<>
int List<Spell>::Size() { return (int)list.size(); }

template<>
Spell& List<Spell>::GetItem(int index) { return list[index]; }
