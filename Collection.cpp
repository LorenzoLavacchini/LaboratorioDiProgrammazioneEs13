//
// Created by laura on 05/09/2021.
//

#include "Collection.h"

int Collection::getListSize() {
    return notes.size();
}

void Collection::addNote(Note *n) {
    notes.push_back(n);
}

void Collection::removeNote(Note *n) {
    notes.remove(n);
}