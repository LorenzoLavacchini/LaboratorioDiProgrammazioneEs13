//
// Created by lorenzo on 05/09/2021.
//

#include "NotesCollectionView.h"


void NotesCollectionView::update() {
    notesCount = notesCollection->getListSize();
}

NotesCollectionView::NotesCollectionView(NotesCollection *s) : notesCollection(s){
    notesCollection->addObserver(this);
}

NotesCollectionView::~NotesCollectionView() {
    notesCollection->removeObserver(this);
}

int NotesCollectionView::getNotesCount() const {
    return notesCount;
}

NotesCollection *NotesCollectionView::getNotesCollection() const {
    return notesCollection;
}
