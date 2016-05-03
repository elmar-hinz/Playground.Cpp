#include <iostream>
#include "counter.h"

using namespace std;

void Counter::increment()
{
    count++;
}

void Counter::decrement()
{
    count--;
}

int Counter::result()
{
    return count;
}

string hello = "Ola";

void greet(std::string name)
{
    cout << hello <<" " << name << "!" << endl;
}


