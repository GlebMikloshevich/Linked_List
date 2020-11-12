//
// Created by gleb on 04.11.2020.
//

#ifndef LINKED_LIST_LINKEDLISTITEM_H
#define LINKED_LIST_LINKEDLISTITEM_H

template <class Type> class LinkedListItem {
     Type data;


    public:
        LinkedListItem* next;
        LinkedListItem(const Type&  adata, LinkedListItem* anext);
        const Type& getData() const;
        LinkedListItem* getNext();

        template <class T> friend class LinkedList;

};


#endif //LINKED_LIST_LINKEDLISTITEM_H
