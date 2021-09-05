//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
#include "Note.h"
#include <list>
#include "Subject.h"

class NotesCollection : public Subject{
private:
    std::string name;
    std::list<Note*> notes;
    std::list<Observer*> observers;
public:
    explicit NotesCollection(std::string n);
    const std::string &getName() const;

    void setName(const std::string &name);

    const std::list<Note*> &getNotes() const;

    int getListSize();

    void addObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() override;
    virtual ~NotesCollection(){}
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
