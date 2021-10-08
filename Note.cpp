//
// Created by lorenzo on 05/09/2021.
//

#include "Note.h"

const std::string &Note::getTitle() const {
    return title;
}

void Note::setTitle(const std::string &title) {
    if(blocked == false) {
        Note::title = title;
    }
    else{
        std::cout<<"Impossibile modificare la nota. E' necessario sbloccarla."<<std::endl;
    }
}

const std::string &Note::getText() const {
    return text;
}

void Note::setText(const std::string &text) {
    if(blocked == false) {
        Note::text = text;
    }
    else{
        std::cout<<"Impossibile modificare la nota. E' necessario sbloccarla."<<std::endl;
    }
}

bool Note::isBlocked() const {
    return blocked;
}

void Note::setBlocked(bool blocked) {
    Note::blocked = blocked;
}

Note::Note(std::string ti, std::string te, bool b) : title(ti),text(te),blocked(b){}


bool Note::operator==(const Note &n) {
    if(title == n.getTitle() && text == n.getText() && blocked == n.isBlocked()){
        return true;
    }
    else{
        return false;
    }
}

