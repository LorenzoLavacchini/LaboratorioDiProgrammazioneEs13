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

void SpecificNotesCollection::addNote(Note *n) {
    Collection::addNote(n);
    notifyObservers();
}

void SpecificNotesCollection::removeNote(Note *n) {
    Collection::removeNote(n);
    notifyObservers();
}

int SpecificNotesCollection::getNumObservers(){
    int i = 0;
    for(auto o:observers){
        i++;
    }
    return i;
}