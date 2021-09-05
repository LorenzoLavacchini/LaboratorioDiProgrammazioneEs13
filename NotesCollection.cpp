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

const std::list<Note> &NotesCollection::getNotes() const {
    return notes;
}

void NotesCollection::setNotes(const std::list<Note> &notes) {
    NotesCollection::notes = notes;
}

NotesCollection::NotesCollection(std::string n) : name(n){}

int NotesCollection::getNumListSize() {
   return notes.size();
}
