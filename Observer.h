//
// Created by lorenzo on 05/09/2021.
//

#ifndef LABORATORIODIPROGRAMMAZIONEES13_OBSERVER_H
#define LABORATORIODIPROGRAMMAZIONEES13_OBSERVER_H


class Observer {
public:
    virtual void update()=0;
    virtual ~Observer(){}
};


#endif //LABORATORIODIPROGRAMMAZIONEES13_OBSERVER_H
