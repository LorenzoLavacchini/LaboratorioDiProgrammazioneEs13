//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTION_H
#include "Note.h"
#include <list>
#include "Subject.h"
class SpecificNotesCollection : public Subject {
private:
    std::list<Note*> notes;
    std::list<Observer*> observers;
public:
    const std::list<Note *> &getNotes() const;

    int getListSize();

    void addObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() override;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_SPECIFICNOTESCOLLECTION_H
