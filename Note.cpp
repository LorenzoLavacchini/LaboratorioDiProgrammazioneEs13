//
// Created by lorenzo on 05/09/2021.
//

#include "Note.h"

const std::string &Note::getTitle() const {
    return title;
}

void Note::setTitle(const std::string &title) {
    Note::title = title;
}

const std::string &Note::getText() const {
    return text;
}

void Note::setText(const std::string &text) {
    Note::text = text;
}

bool Note::isBlocked() const {
    return blocked;
}

void Note::setBlocked(bool blocked) {
    Note::blocked = blocked;
}

Note::Note(std::string ti, std::string te, bool b) : title(ti),text(te),blocked(b){}

void Note::printInformations() {
    std::cout<<"Titolo: "<<title<<std::endl;
    if(blocked==true)
        std::cout<<"Bloccata: vero"<<std::endl;
    else
        std::cout<<"Bloccata: falso"<<std::endl;
    std::cout<<"Testo: "<<text<<std::endl;
}

