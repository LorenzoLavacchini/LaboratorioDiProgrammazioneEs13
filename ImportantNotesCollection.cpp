//
// Created by lorenzo on 05/09/2021.
//

#include "ImportantNotesCollection.h"

const std::list<Note *> &ImportantNotesCollection::getNotes() const {
    return notes;
}


int ImportantNotesCollection::getListSize() {
    return notes.size();
}

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

void ImportantNotesCollection::addNote(Note *n) {
    notes.push_back(n);
}

void ImportantNotesCollection::removeNote(Note *n) {
    notes.remove(n);
}
