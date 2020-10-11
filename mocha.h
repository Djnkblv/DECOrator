#ifndef MOCHA_H
#define MOCHA_H

#include "condmentdecorator.h"

class Mocha : public CondmentDecorator
{
public:
    Mocha(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // MOCHA_H
