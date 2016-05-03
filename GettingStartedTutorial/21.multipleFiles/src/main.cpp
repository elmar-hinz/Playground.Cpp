#include <iostream>
#include "counter/counter.cpp"

using namespace std;

int main()
{
    cout << greet("Elmar") << endl;
    Counter * counter = new Counter();
    counter->increment();
    counter->decrement();
    counter->decrement();
    counter->decrement();
    cout << "Counted: " << counter->result() << endl;
}
