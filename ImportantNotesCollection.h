//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
#define LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
#include"Note.h"
#include <list>

class ImportantNotesCollection {
private:
    std::list<Note*> notes;
public:
    const std::list<Note *> &getNotes() const;
    void setNotes(const std::list<Note *> &notes);
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_IMPORTANTNOTESCOLLECTION_H
