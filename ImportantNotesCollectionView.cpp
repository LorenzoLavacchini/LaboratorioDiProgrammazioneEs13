//
// Created by lorenzo on 05/09/2021.
//

#include "ImportantNotesCollectionView.h"

void ImportantNotesCollectionView::update() {
    std::cout<<"Numero di note nella lista importantNotesCollection:"<<importantNotesCollection->getListSize()<<std::endl;
}

ImportantNotesCollectionView::ImportantNotesCollectionView(ImportantNotesCollection *s) : importantNotesCollection(s) {}

