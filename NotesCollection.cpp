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


NotesCollection::NotesCollection(std::string n) : name(n){}

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

