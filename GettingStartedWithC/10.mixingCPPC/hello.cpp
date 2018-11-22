/*
 * The first form includes stdio into the global space linke in C.
 * The second form includes it into the namespace std.
 * The third form uses C++ iostream.
 */
#include <stdio.h>
#include <cstdio>
#include <iostream>

void hello() { printf("Hello function."); }

int main()
{
    printf("I like pure C!\n");
    std::printf("I like C in the std namespace!\n");
    std::cout << "I like C++\n" << std::endl;
    hello();
    return 0;
}

