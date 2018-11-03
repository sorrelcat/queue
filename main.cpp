#include <iostream>
#include "queue.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Element t1(1), t2(2), t3(3);

    Queue q1;
    q1.print();

    Queue q2(t2);
    q2.print();

    Queue q3(q2);
    q3.print();

    q1.enqueue(&t1);
    q1.enqueue(&t2);
    q1.enqueue(&t3);
    q1.print();


    return 0;
}