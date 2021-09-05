//
// Created by lorenzo on 05/09/2021.
//

#include "ImportantNotesCollection.h"


void ImportantNotesCollection::addObserver(Observer *o) {
    observers.push_back(o);
}

void ImportantNotesCollection::removeObserver(Observer *o) {
    observers.remove(o);
}

void ImportantNotesCollection::notifyObservers() {
    for(auto o:observers){
        o->update();
    }
}


