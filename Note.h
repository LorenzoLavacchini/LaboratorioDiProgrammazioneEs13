//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_NOTE_H
#define LABORATORIODIPROGRAMMAZIONEES13_NOTE_H
#include <iostream>

class Note {
private:
    std::string title;
    std::string text;
    bool blocked;
public:
    Note(std::string ti, std::string te,bool b);
    const std::string &getTitle() const;
    void setTitle(const std::string &title);
    const std::string &getText() const;
    void setText(const std::string &text);
    bool isBlocked() const;
    void setBlocked(bool blocked);
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_NOTE_H
