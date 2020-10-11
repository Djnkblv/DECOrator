#ifndef WHIP_H
#define WHIP_H

#include "condmentdecorator.h"

class Whip : public CondmentDecorator
{
public:
    Whip(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

#endif // WHIP_H
