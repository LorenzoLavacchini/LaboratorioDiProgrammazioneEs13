//
// Created by lorenzo on 05/09/2021.
//

#include "SpecificNotesCollectionView.h"

void SpecificNotesCollectionView::update() {
    notesCount = notesCollection->getCertainTagListSize(tagToObserve);
}

SpecificNotesCollectionView::SpecificNotesCollectionView(NotesCollection *s, std::string t):notesCollection(s), tagToObserve(t){
    notesCollection->addObserver(this);
}

SpecificNotesCollectionView::~SpecificNotesCollectionView() {
    notesCollection->removeObserver(this);
}

int SpecificNotesCollectionView::getNotesCount() const {
    return notesCount;
}

NotesCollection *SpecificNotesCollectionView::getNotesCollection() const {
    return notesCollection;
}
