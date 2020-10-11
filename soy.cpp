#include "soy.h"

Soy::Soy(Beverage *b) : CondmentDecorator(b)
{

}

double Soy::cost(){
    return 35.0 + beverage->cost();
}

QString Soy::getDescription() {
    return beverage->getDescription() + ", Soy";
}
