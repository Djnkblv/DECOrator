#ifndef SOY_H
#define SOY_H

#include "condmentdecorator.h"

class Soy : public CondmentDecorator
{
public:
    Soy(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // SOY_H
