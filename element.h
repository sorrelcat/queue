//
// Created by sorre on 03.11.2018.
//

#ifndef QUEUE_ELEMENT_H
#define QUEUE_ELEMENT_H

struct Element {
    int value;
    Element* next;
    Element* prev;

    Element();
    Element(int t);
    Element(const Element& e);
    ~Element();

    void print();
};

#endif //QUEUE_ELEMENT_H
