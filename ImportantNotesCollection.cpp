//
// Created by lorenzo on 05/09/2021.
//

#include "ImportantNotesCollection.h"

const std::list<Note *> &ImportantNotesCollection::getNotes() const {
    return notes;
}

void ImportantNotesCollection::setNotes(const std::list<Note *> &notes) {
    ImportantNotesCollection::notes = notes;
}

int ImportantNotesCollection::getListSize() {
    return notes.size();
}
