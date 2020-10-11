#ifndef CONDMENTDECORATOR_H
#define CONDMENTDECORATOR_H

#include "beverage.h"

class CondmentDecorator : public Beverage
{
protected:
    Beverage *beverage;
public:
    CondmentDecorator(Beverage*);
};

#endif // CONDMENTDECORATOR_H
