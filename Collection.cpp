//
// Created by laura on 05/09/2021.
//

#include "Collection.h"

int Collection::getListSize() {
    return notes.size();
}

void Collection::addNote(Note *n) {
    notes.push_back(n);
}

void Collection::removeNote(Note *n) {
    if(n->isBlocked()==false){
        notes.remove(n);
    }
    else{
        std::cout<<"Impossibile cancellare la nota. E' necessario sbloccarla"<<std::endl;
    }
}

void Collection::printAllNotes() {
    for(auto n:notes){
        n->printInformations();
    }
}
