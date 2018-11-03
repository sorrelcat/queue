#include <iostream>
#include "queue.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    Element t1;
    t1.print();

    Element t2(3);
    t2.print();

    Element t3(t2);
    t3.print();

    t2.next = &t3;
    t2.print();

    return 0;
}