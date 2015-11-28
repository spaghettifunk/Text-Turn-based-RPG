//
//  ch_list.cpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#include "ch_list.hpp"

template<class T> List<T>::List()
{
    this->head = nullptr;
    this->tail = nullptr;
}

template<class T> List<T>::~List()
{
    T curr_item = this->head; // initialize current node to root
    while (curr_item != nullptr)
    {
        T next_item = curr_item->Next();   // get next node
        delete curr_item; // delete current
        curr_item = next_item; // set current to "old" next
    }
}

template<class T> void List<T>::add(T &i)
{
    this->tail->Next() = i;
}

template<class T> void List<T>::remove(T &item)
{
    T curr_item = this->head;
    while (curr_item != nullptr) {
        if (curr_item == item) {
            delete curr_item;
            break;
        }
    }
}

template<class T> int List<T>::size()
{
    int size = 0;
    T curr_item = this->head;
    while (curr_item->Next() != nullptr) {
        curr_item = &curr_item->Next();
        size++;
    }
    
    return size;
}

// specialized Item
template<> List<Item>::List() { }
template<> List<Item>::~List() { }
template<> void List<Item>::add(Item& i) { }
template<> void List<Item>::remove(Item& i){ }
template<> int List<Item>::size() { return 0; }

// specialize Armour
template<> List<Armour>::List() { }
template<> List<Armour>::~List() { }
template<> void List<Armour>::add(Armour& i) { }
template<> void List<Armour>::remove(Armour& i){ }
template<> int List<Armour>::size() { return 0; }