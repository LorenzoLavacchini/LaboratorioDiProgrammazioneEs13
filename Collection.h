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
    void addNote(Note* n);
    void removeNote(Note* n);
    void printAllNotes();
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_COLLECTION_H
