//
// Created by sorre on 03.11.2018.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "element.h"

const int MAX_SIZE = 10;

class Queue {
    Element* head;
    Element* tail;
    int length;
public:
    Queue();
    Queue(Element& e);
    Queue(const Queue& q);
    ~Queue();

    void print();

    void enqueue(Element* e);
    void enqueue(int t);
    Element* dequeue();
    Element* peek();
    bool isFull();
    bool isEmpty();
};
#endif //QUEUE_QUEUE_H
