//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_SUBJECT_H
#define LABORATORIODIPROGRAMMAZIONEES13_SUBJECT_H
#include "Observer.h"

class Subject {
public:
    virtual void addObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual void notifyObservers()=0;
    virtual ~Subject(){}
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_SUBJECT_H
