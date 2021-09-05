//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTIONVIEW_H
#define LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTIONVIEW_H
#include "Observer.h"
#include "ImportantNotesCollection.h"

class ImportantNotesCollectionView : public Observer{
private:
    ImportantNotesCollection* importantNotesCollection;
public:
    explicit ImportantNotesCollectionView(ImportantNotesCollection* s);
    void update() override;
    virtual ~ImportantNotesCollectionView();
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTIONVIEW_H
