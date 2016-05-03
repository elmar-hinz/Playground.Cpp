#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
    greet("Elmar");
    Counter * counter = new Counter();
    counter->increment();
    counter->decrement();
    counter->decrement();
    counter->decrement();
    cout << "Counted: " << counter->result() << endl;
}
