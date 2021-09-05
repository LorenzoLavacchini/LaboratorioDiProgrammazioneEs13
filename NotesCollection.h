//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
#include "Note.h"
#include <list>

class NotesCollection {
private:
    std::string name;
    std::list<Note*> notes;
public:
    NotesCollection(std::string n);
    const std::string &getName() const;

    void setName(const std::string &name);

    const std::list<Note> &getNotes() const;

    void setNotes(const std::list<Note> &notes);

    int getNumListSize();
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTESCOLLECTION_H
