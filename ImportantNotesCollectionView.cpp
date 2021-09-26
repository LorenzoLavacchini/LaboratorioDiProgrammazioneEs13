//
// Created by lorenzo on 05/09/2021.
//

#include "ImportantNotesCollectionView.h"

void ImportantNotesCollectionView::update() {
    notesCount = importantNotesCollection->getListSize();
    std::cout<<"Numero di note nella lista importantNotesCollection:"<<importantNotesCollection->getListSize()<<std::endl;
}

ImportantNotesCollectionView::ImportantNotesCollectionView(ImportantNotesCollection *s) : importantNotesCollection(s) {
    importantNotesCollection->addObserver(this);
}

ImportantNotesCollectionView::~ImportantNotesCollectionView() {
    importantNotesCollection->removeObserver(this);
}

int ImportantNotesCollectionView::getNotesCount() const {
    return notesCount;
}


