#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "LinkedListItem.h"
#include "LinkedListItem.cpp"
// Josephus problem
int main() {
    int n, m;
    std::cout<<"enter number of people and people to skip \n";
    std::cin >>n >>m;

    LinkedList<int> list;
    for (int i = n; i > 0; i--)
        list.insertFirst(i);

    for (LinkedListItem<int>* ptr = list.getStart(); ptr != ptr->getNext(); ptr=ptr->getNext()){
        for (int i = 0; i < m-3; i++)
            ptr = ptr->getNext();
        list.deleteAfter(ptr);
    }
    std::cout<<list<<std::endl;
    return 0;
}
