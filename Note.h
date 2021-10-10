//
// Created by laura on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_NOTE_H
#define LABORATORIODIPROGRAMMAZIONEES13_NOTE_H
#include <iostream>
#include <list>

class Note {
private:
    std::string title;
    std::string text;
    bool blocked;
    bool important;
    std::list<std::string> tags;
public:
    Note(std::string ti, std::string te,bool b, bool i=false);
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    const std::string &getText() const;
    void setText(const std::string &text);
    bool isBlocked() const;
    void setBlocked(bool blocked);
    bool isImportant() const;
    void setImportant(bool important);
    void addTag(std::string t);
    bool containsTag(std::string t);
    int getNumTags();
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTE_H
