//
// Created by lorenzo on 05/09/2021.
//

#include "ImportantNotesCollectionView.h"

void ImportantNotesCollectionView::update() {
    notesCount = notesCollection->getImportantListSize();
}

ImportantNotesCollectionView::ImportantNotesCollectionView(NotesCollection *s) : notesCollection(s) {
    notesCollection->addObserver(this);
}

ImportantNotesCollectionView::~ImportantNotesCollectionView() {
    notesCollection->removeObserver(this);
}

int ImportantNotesCollectionView::getNotesCount() const {
    return notesCount;
}



