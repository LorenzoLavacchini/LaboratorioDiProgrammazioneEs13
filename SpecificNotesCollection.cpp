//
// Created by lorenzo on 05/09/2021.
//

#include "SpecificNotesCollection.h"

const std::list<Note *> &SpecificNotesCollection::getNotes() const {
    return notes;
}

void SpecificNotesCollection::setNotes(const std::list<Note *> &notes) {
    SpecificNotesCollection::notes = notes;
}
