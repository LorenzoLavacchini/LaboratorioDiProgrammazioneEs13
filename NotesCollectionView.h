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
    int notesCount;
public:
    explicit NotesCollectionView(NotesCollection* s);
    void update() override;
    virtual ~NotesCollectionView();
    int getNotesCount() const;

    //Serve per praticità di Unit Testing
    NotesCollection *getNotesCollection() const;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTIONVIEW_H
