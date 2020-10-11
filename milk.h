#ifndef MILK_H
#define MILK_H

#include "beverage.h"
#include "condmentdecorator.h"

class Milk : public CondmentDecorator
{
public:
    Milk(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // MILK_H
