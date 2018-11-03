//
// Created by sorre on 03.11.2018.
//

#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue() : head(new Element()), length(0) {}
Queue::Queue(Element &e) : head(&e){
    head->prev = nullptr;
    length = 1;
    for(auto t = head->next; t != nullptr; t = t->next)
        length++;
}
Queue::Queue(const Queue &q) : head(q.head), length(q.length) {}
Queue::~Queue() {}

void Queue::print() {
    if(length == 0) cout << "Empty queue\n";
    else {
        cout << "Queue length = " << length << endl;
        for (auto it = head; it != nullptr; it = it->next)
            it->print();
    }
}