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

    Queue q1;
    q1.print();

    Queue q2(t2);
    q2.print();

    Queue q3(q2);
    q3.print();

    return 0;
}