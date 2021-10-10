//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTIONVIEW_H
#define LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTIONVIEW_H
#include "Observer.h"
#include "NotesCollection.h"

class SpecificNotesCollectionView : public Observer{
private:
    std::string tagToObserve;
    NotesCollection* notesCollection;
    int notesCount;
public:
    SpecificNotesCollectionView(NotesCollection* s, std::string t);
    void update() override;
    virtual ~SpecificNotesCollectionView();
    int getNotesCount() const;

    //Serve per praticità di Unit Testing
    NotesCollection *getNotesCollection() const;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTIONVIEW_H
