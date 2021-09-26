//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTION_H
#include "Note.h"
#include <list>
#include "Subject.h"
#include "Collection.h"
class SpecificNotesCollection : public Subject, public Collection {
private:
    std::list<Observer*> observers;
public:

    void addObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() override;

    virtual ~SpecificNotesCollection(){}

    void addNote(Note *n) override;

    void removeNote(Note *n) override;

    int getNumObservers();
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTION_H
