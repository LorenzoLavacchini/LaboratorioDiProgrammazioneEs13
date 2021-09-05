//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTIONVIEW_H
#define LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTIONVIEW_H
#include "Observer.h"
#include "SpecificNotesCollection.h"

class SpecificNotesCollectionView : public Observer{
private:
    SpecificNotesCollection* specificNotesCollection;
public:
    explicit SpecificNotesCollectionView(SpecificNotesCollection* s);
    void update() override;
    virtual ~SpecificNotesCollectionView();
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTIONVIEW_H
