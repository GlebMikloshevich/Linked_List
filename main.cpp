#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "LinkedListItem.h"
#include "LinkedListItem.cpp"
// Josephus problem
int main() {
    int n, m; //
    std::cin>>n;

    LinkedList<int> list;
    for (int i = n; i >= 1; i--)
        list.insertFirst(i);
    std::cout<<list;

    //std::cout<<list<<std::endl;
    //std::cout<<list<<std::endl;
    //LinkedListItem <int>* it = list.getStart();
    //std::cout<<it->getData();
        /*if (it->getNext()->getData() == it->getData())
            std::cout<<it->getData();
        else{

        }*/
    return 0;
}
