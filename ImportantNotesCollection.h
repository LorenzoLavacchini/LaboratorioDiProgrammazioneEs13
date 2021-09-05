//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
#include"Note.h"
#include <list>
#include "Subject.h"
#include "Collection.h"

class ImportantNotesCollection : public Subject, public Collection{
private:
    std::list<Observer*> observers;
public:

    void addObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() override;

    virtual ~ImportantNotesCollection(){}

};


#endif //LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
