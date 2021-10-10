//
// Created by lorenzo on 05/09/2021.
//

#include "NotesCollection.h"

const std::string &NotesCollection::getName() const {
    return name;
}

void NotesCollection::setName(const std::string &name) {
    NotesCollection::name = name;
}


NotesCollection::NotesCollection(std::string n) : name(n){}

void NotesCollection::addObserver(Observer *o) {
    observers.push_back(o);
}

void NotesCollection::removeObserver(Observer *o) {
    observers.remove(o);
}

void NotesCollection::notifyObservers() {
    for(auto o:observers){
        o->update();
    }
}

int NotesCollection::getNumObservers(){
    int i = 0;
    for(auto o:observers){
        i++;
    }
    return i;
}


int NotesCollection::getListSize() {
    return notes.size();
}

void NotesCollection::addNote(Note *n) {
    notes.push_back(n);
    notifyObservers();
}

void NotesCollection::removeNote(Note *n) {
    //Aggiunto il controllo sulla rimozione delle Note: se la nota da rimuovere
    //non coincide con nessuna nota presente nella lista, allora viene lanciata un'eccezione

    bool found = false;
    for(auto note:notes){
        if(n==note){
            found = true;
        }
    }

    if(found == true){
        if(n->isBlocked()==false){
            notes.remove(n);
        }
        notifyObservers();
    }
    else{
        throw std::runtime_error("Errore: si può cancellare solo note presenti all'interno della lista");
    }

}

int NotesCollection::getImportantListSize() {
    int count = 0;
    for(auto n:notes){
        if(n->isImportant()==true){
            count++;
        }
    }
    return count;
}

int NotesCollection::getCertainTagListSize(std::string t) {
    int count = 0;
    for(auto n:notes){
        if(n->containsTag(t)==true){
            count++;
        }
    }
    return count;
}
