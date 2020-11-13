//
// Created by gleb on 04.11.2020.
//

#include "LinkedListItem.h"

template <class Type>
LinkedListItem<Type>::LinkedListItem(const Type &adata, LinkedListItem<Type> *anext) {
    data = adata;
    next = anext;
}

template <class Type>
LinkedListItem<Type>* LinkedListItem<Type>::getNext() {
    return next;
}

template <class Type>
const Type& LinkedListItem<Type>::getData() const {
    return data;
}


template <class Type>
void LinkedListItem<Type>::setNext(LinkedListItem<Type>* anext){
    this->next = anext;
}


