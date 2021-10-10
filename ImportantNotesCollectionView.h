//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTIONVIEW_H
#define LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTIONVIEW_H
#include "Observer.h"
#include "NotesCollection.h"

class ImportantNotesCollectionView : public Observer{
private:
    NotesCollection* notesCollection;
    int notesCount;
public:
    explicit ImportantNotesCollectionView(NotesCollection* s);
    void update() override;
    virtual ~ImportantNotesCollectionView();
    int getNotesCount() const;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTIONVIEW_H
