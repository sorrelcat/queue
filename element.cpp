//
// Created by sorre on 03.11.2018.
//

#include "element.h"
#include <iostream>
using namespace std;

Element::Element(int t) : value(t), next(nullptr), prev (nullptr) {}
Element::Element() : Element(0) {}
Element::Element(const Element &e) : value(e.value), next(e.next), prev(e.prev) {}
Element::~Element() {}
void Element::print() {
    if(prev != nullptr) cout << " <- ";
    cout << value;
    if(next != nullptr) cout << " -> ";
    cout << endl;

}