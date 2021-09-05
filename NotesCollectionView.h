//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTIONVIEW_H
#define LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTIONVIEW_H
#include "NotesCollection.h"
#include "Observer.h"
#include <list>
#include <iostream>
class NotesCollectionView : public Observer{
public:
    NotesCollection* notesCollection;
public:
    void update() override;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTIONVIEW_H
