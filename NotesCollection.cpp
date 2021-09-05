//
// Created by lorenzo on 05/09/2021.
//

#include "NotesCollection.h"

const std::string &NotesCollection::getName() const {
    return name;
}

void NotesCollection::setName(const std::string &name) {
    NotesCollection::name = name;
}

const std::list<Note*> &NotesCollection::getNotes() const {
    return notes;
}


NotesCollection::NotesCollection(std::string n) : name(n){}

int NotesCollection::getListSize() {
   return notes.size();
}

void NotesCollection::addObserver(Observer *o) {
    observers.push_back(o);
}

void NotesCollection::removeObserver(Observer *o) {
    observers.remove(o);
}

void NotesCollection::notifyObservers() {
    for(auto o:observers){
        o->update();
    }
}

void NotesCollection::addNote(Note *n) {
    notes.push_back(n);
}

void NotesCollection::removeNote(Note *n) {
    notes.remove(n);
}
