#include "mocha.h"

Mocha::Mocha(Beverage *b) : CondmentDecorator(b)
{

}

double Mocha::cost(){
    return 25.0 + beverage->cost();
}

QString Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}
