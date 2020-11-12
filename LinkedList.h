//
// Created by gleb on 04.11.2020.
//
#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H
#include <iostream>
#include "LinkedListItem.h"

class LinkedListException{};
template <class Type> class LinkedList {
    LinkedList(const LinkedList& list);
    LinkedList& operator =(const LinkedList& list);

    public:

        LinkedListItem <Type>* start;
        LinkedListItem <Type>* end;
        LinkedList();
        ~LinkedList();
        LinkedListItem<Type>* getStart();
        LinkedListItem<Type>* getEnd();
        void deleteFirst();
        void deleteAfter(LinkedListItem<Type>* ptr);
        void insertFirst(const Type& data);
        void insertAfter(LinkedListItem<Type>* ptr, const Type& data);

        template<class T> friend std::ostream& operator<<(std::ostream& out, LinkedList& list);

};


#endif //LINKED_LIST_LINKEDLIST_H
