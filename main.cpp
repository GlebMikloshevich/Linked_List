#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include "LinkedListItem.h"
#include "LinkedListItem.cpp"
// Josephus problem
int main() {
    int n, m; //
    std::cin >> n;

    LinkedList<int> list;
    for (int i = 0; i < n; i++) {
        std::cout << list.getStart()<<std::endl;
        list.insertFirst(i);
    }
    std::cout<<list.getStart()<<std::endl;
    //std::cout<<list.getStart()<<std::endl;
    std::cout<<list<<std::endl;
    std::cout<<"---"<<std::endl;
    for (int i = 0; i < n; i++){
        list.deleteFirst();
        std::cout<<list<<std::endl;
    }

    return 0;
}
