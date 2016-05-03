#include <iostream>

class Counter {
    public: int count = 0;
};

void print(Counter);
void print(Counter*);

int main()
{
    Counter counter = Counter();
    std::cout << "Copy by value" << std::endl;
    print(counter);
    print(counter);
    print(counter);

    std::cout << "Copy by reference" << std::endl;
    print(&counter);
    print(&counter);
    print(&counter);
    return 0;
}

/**
 * Copy by value.
 */
void print(Counter counter) {
    counter.count += 1;
    std::cout << "count: " << counter.count << std::endl;
}

/**
 * Copy by reference.
 */
void print(Counter * counter) {
    counter->count += 1;
    std::cout << "count: " << counter->count << std::endl;
}


