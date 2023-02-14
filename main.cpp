#include <iostream>
#include "calculator.hpp"
using namespace std;

int main() {

    int a = 5, b = 18;

    calculator calc;

    calc.push_a (a);

    calc.push_b (b);

    cout << calc.add << endl;
}
