//
// Created by lorenzo on 05/09/2021.
//

#include "SpecificNotesCollection.h"

const std::list<Note *> &SpecificNotesCollection::getNotes() const {
    return notes;
}


int SpecificNotesCollection::getListSize() {
    return notes.size();
}

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
    notes.push_back(n);
}

void SpecificNotesCollection::removeNote(Note *n) {
    notes.remove(n);
}
