#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "";
    strcat(a, "Hello ");

    char* b = "World!";
    strcat(a, b);

    printf("%s\n", a);
    printf("Lenght: %d\n", (int)strlen(a));
    printf("Ende: '%s'\n", &a[5]);

}

