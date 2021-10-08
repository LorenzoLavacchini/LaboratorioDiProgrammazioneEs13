//
// Created by laura on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_COLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_COLLECTION_H
#include "Note.h"
#include <list>
class Collection {
protected:
    std::list<Note*> notes;
public:
    int getListSize();
    virtual void addNote(Note* n);
    virtual void removeNote(Note* n);
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_COLLECTION_H
