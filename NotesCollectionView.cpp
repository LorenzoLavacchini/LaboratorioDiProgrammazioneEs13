//
// Created by lorenzo on 05/09/2021.
//

#include "NotesCollectionView.h"


void NotesCollectionView::update() {
    std::cout<<"Numero di note nella lista "<<notesCollection->getName()<<": "<<notesCollection->getListSize()<<std::endl;
}

NotesCollectionView::NotesCollectionView(NotesCollection *s) : notesCollection(s){
    notesCollection->addObserver(this);
}

NotesCollectionView::~NotesCollectionView() {
    notesCollection->removeObserver(this);
}
