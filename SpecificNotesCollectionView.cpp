//
// Created by lorenzo on 05/09/2021.
//

#include "SpecificNotesCollectionView.h"

void SpecificNotesCollectionView::update() {
    notesCount = specificNotesCollection->getListSize();
    std::cout<<"Numero di note nella lista specificNotesCollection:"<<specificNotesCollection->getListSize()<<std::endl;
}

SpecificNotesCollectionView::SpecificNotesCollectionView(SpecificNotesCollection *s):specificNotesCollection(s){
    specificNotesCollection->addObserver(this);
}

SpecificNotesCollectionView::~SpecificNotesCollectionView() {
    specificNotesCollection->removeObserver(this);
}

int SpecificNotesCollectionView::getNotesCount() const {
    return notesCount;
}
