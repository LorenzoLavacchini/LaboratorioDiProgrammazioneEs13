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
}

const std::string &Note::getText() const {
    return text;
}

void Note::setText(const std::string &text) {
    if(blocked == false) {
        Note::text = text;
    }
}

bool Note::isBlocked() const {
    return blocked;
}

void Note::setBlocked(bool blocked) {
    Note::blocked = blocked;
}

Note::Note(std::string ti, std::string te, bool b, bool i) : title(ti),text(te),blocked(b),important(i){}

bool Note::isImportant() const {
    return important;
}

void Note::setImportant(bool important) {
    Note::important = important;
}

void Note::addTag(std::string t) {
    if(blocked == false){
        tags.push_back(t);
    }
}

bool Note::containsTag(std::string t) {
    bool result = false;
    for(auto tag:tags){
        if(tag==t){
            result = true;
        }
    }
    return result;
}

int Note::getNumTags() {
    int count = 0;
    for(auto tag:tags){
        count++;
    }
    return count;
}

