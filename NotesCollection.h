//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
#include "Note.h"
#include <list>
#include "Subject.h"
#include "Collection.h"

class NotesCollection : public Subject, public Collection{
private:
    std::string name;
    std::list<Observer*> observers;
public:
    explicit NotesCollection(std::string n);
    const std::string &getName() const;

    void setName(const std::string &name);

    void addObserver(Observer *o) override;

    void removeObserver(Observer *o) override;

    void notifyObservers() override;

    virtual ~NotesCollection(){}

    void addNote(Note *n) override;

    void removeNote(Note *n) override;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
