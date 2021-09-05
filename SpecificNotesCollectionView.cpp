//
// Created by lorenzo on 05/09/2021.
//

#include "SpecificNotesCollectionView.h"

void SpecificNotesCollectionView::update() {
    std::cout<<"Numero di note nella lista specificNotesCollection:"<<specificNotesCollection->getListSize()<<std::endl;
}

SpecificNotesCollectionView::SpecificNotesCollectionView(SpecificNotesCollection *s):specificNotesCollection(s){}
