//
// Created by lorenzo on 05/09/2021.
//

#include "SpecificNotesCollection.h"

void SpecificNotesCollection::addObserver(Observer *o) {
    observers.push_back(o);
}

void SpecificNotesCollection::removeObserver(Observer *o) {
    observers.remove(o);
}

void SpecificNotesCollection::notifyObservers() {
    for(auto o:observers){
        o->update();
    }
}

