#include <iostream>

using namespace std;

string hello = "Hello ";

string greet(string name)
{
    return hello + name;
}

class Counter {
    int count = 0;

    public:
    void increment()
    {
        count++;
    }

    void decrement()
    {
        count--;
    }

    int result()
    {
        return count;
    }
};

