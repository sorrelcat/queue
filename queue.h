//
// Created by sorre on 03.11.2018.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "element.h"

class Queue {
    Element* head;
    int length;
public:
    Queue();
    Queue(Element& e);
    Queue(const Queue& q);
    ~Queue();

    void print();
};
#endif //QUEUE_QUEUE_H
