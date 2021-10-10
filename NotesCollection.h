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
    std::list<Observer*> observers;
    std::list<Note*> notes;
public:
    explicit NotesCollection(std::string n);
    const std::string &getName() const;
    void setName(const std::string &name);
    void addObserver(Observer *o) override;
    void removeObserver(Observer *o) override;
    void notifyObservers() override;
    virtual ~NotesCollection(){}
    void addNote(Note* n);
    void removeNote(Note* n);
    int getNumObservers();
    int getListSize();
    int getImportantListSize();
    int getCertainTagListSize(std::string t);
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
