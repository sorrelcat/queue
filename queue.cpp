//
// Created by sorre on 03.11.2018.
//

#include "queue.h"

Queue::Queue() : head(new Element()), lenght(0) {}
Queue::Queue(const Queue &q) : head(q.head), lenght(q.lenght) {}
Queue::~Queue() {}

