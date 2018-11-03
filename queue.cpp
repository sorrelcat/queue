//
// Created by sorre on 03.11.2018.
//

#include "queue.h"
#include "element.h"
#include <iostream>

using namespace std;

Queue::Queue() : head(new Element()), tail(head), length(0) {}
Queue::Queue(Element &e) : head(&e){
    head->prev = nullptr;
    length = 1;
    Element* t;
    for(t = head->next; t != nullptr; t = t->next)
        length++;
    tail = t;
}
Queue::Queue(const Queue &q) : head(q.head), tail(q.tail), length(q.length) {}
Queue::~Queue() {}

void Queue::print() {
    if(length == 0) cout << "Empty queue\n";
    else {
        cout << "Queue length = " << length << endl;
        for (auto it = head; it != nullptr; it = it->next)
            it->print();
    }
}

bool Queue::isEmpty() {
    return length == 0;
}

bool Queue::isFull() {
    return length == MAX_SIZE;
}

void Queue::enqueue(Element* e) {
    connect(e, tail);
    tail = e;
    tail->prev = nullptr;
    length++;
}

void Queue::enqueue(int t) {
    enqueue(new Element(t));
    length++;
}

Element* Queue::dequeue() {
    head = head->prev;
    head->next = nullptr;
    length--;
    return head;
}

Element* Queue::peek() {
    return head;
}