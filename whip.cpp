#include "whip.h"

Whip::Whip(Beverage *b) : CondmentDecorator(b)
{

}

double Whip::cost(){
    return 23.0 + beverage->cost();
}

QString Whip::getDescription() {
    return beverage->getDescription() + ", Whip";
}
