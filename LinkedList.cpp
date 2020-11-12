//
// Created by gleb on 04.11.2020.
//

#include "LinkedList.h"

template <class Type>
LinkedList <Type>::LinkedList() {
    start = 0;
    end = 0;
}

template <class Type>
LinkedList <Type>::~LinkedList<Type>() {
    while (start->getNext() != start)
        deleteFirst();
    deleteFirst();

}

template <class Type>
void LinkedList<Type>::insertFirst(const Type &data) {
    LinkedListItem <Type>* second = start;
    start = new LinkedListItem<Type>(data, second);
    if (start->getNext()==0){
        start->next = start;
        end = start;
    }
    end->next = start;
}

template <class Type>
void LinkedList<Type>::deleteAfter(LinkedListItem<Type> *ptr) {
    if (ptr && ptr->next) {
        LinkedListItem<Type>* temp = ptr -> next;
        ptr->next = ptr->next->next;
        delete temp;
    } else throw LinkedListException();
}

template <class Type>
void LinkedList<Type>::insertAfter(LinkedListItem<Type> *ptr, const Type &data) {
    if (ptr){
      LinkedListItem<Type>* temp = ptr -> next;
      ptr->next = new LinkedListItem<Type> (data, temp);
    }
}

template <class T>
std::ostream& operator <<(std::ostream& out, LinkedList<T>& list){
    LinkedListItem<T>* ptr = list.start;
    if (!ptr)
        out<<"EMPTY ";
    else {
        while (ptr != list.getEnd()) {
            out<< ptr-> getData()<<' ';
            ptr = ptr -> getNext();
        }
        out<<list.getEnd()->getData();
    }
    //out<<"test";
    return out;
}

template <class Type>
void LinkedList<Type>::deleteFirst() {
    if (start) {
        if (start->getNext() == start){
            delete start;
            start = 0;
            end = 0;
        } else {
            LinkedListItem<Type>* temp = start -> next;
            delete start;
            start = temp;
            end->next = start;
        }
    } else {
        throw LinkedListException();
    }
}

template <class Type>
LinkedListItem<Type>* LinkedList<Type>::getStart() {
    return start;
}

template <class Type>
LinkedListItem<Type>* LinkedList<Type>::getEnd() {
    return end;
}