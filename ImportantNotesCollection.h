//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
#include"Note.h"
#include <list>
#include "Subject.h"

class ImportantNotesCollection : public Subject{
private:
    std::list<Note*> notes;
    std::list<Observer*> observers;
public:
    const std::list<Note *> &getNotes() const;
    int getListSize();

    void addObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() override;

    virtual ~ImportantNotesCollection(){}

    void addNote(Note* n);

    void removeNote(Note* n);
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
