


#include "calculator.hpp"

calculator::calculator() { }



void calculator::push_a (int a) {

    var_a = a;
}


void calculator::push_b (int b) {

    var_b = b;
}


int calculator::add () {

    return var_a + var_b;
}
