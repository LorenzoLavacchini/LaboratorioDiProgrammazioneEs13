//
// Created by laura on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_SUBJECT_H
#define LABORATORIODIPROGRAMMAZIONEES13_SUBJECT_H


class Subject {
public:
    virtual void addObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual void notifyObservers()=0;
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_SUBJECT_H
