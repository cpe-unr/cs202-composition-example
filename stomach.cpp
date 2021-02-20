//
// Created by Keith Lancaster on 2/20/21.
//

#include <iostream>
#include "stomach.h"


Stomach::Stomach() {
    std::cout << "stomach constructor" << std::endl;
}

Stomach::~Stomach() {
    std::cout << "stomach destructor" << std::endl;
}

bool Stomach::statusCheck() const {
    return functioning;
}

void Stomach::gotHit()  {
    functioning = false;
}
