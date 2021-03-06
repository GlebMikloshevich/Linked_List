//
// Created by gleb on 04.11.2020.
//

#ifndef LINKED_LIST_LINKEDLISTITEM_H
#define LINKED_LIST_LINKEDLISTITEM_H

template <class Type> class LinkedListItem {
    private:
        Type data;
        LinkedListItem* next;
        void setNext(LinkedListItem* anext);
    public:
        LinkedListItem(const Type&  adata, LinkedListItem* anext);
        const Type& getData() const;
        LinkedListItem* getNext();
        template <class T> friend class LinkedList;

};


#endif //LINKED_LIST_LINKEDLISTITEM_H
