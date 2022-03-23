#include <stdio.h>


void new_func()
{
    int counter = 0;
    for (int i=0;i<100;i++)
    {
        counter = counter + 1;
    }
    printf("%d",counter);
}

void new_func1()
{
    int counter = 0;
    for (int i=0;i<100;i++)
    {
        counter = counter + 1;
    }
    printf("%d",counter);
}

void func() {
    printf("Hello");
    int suma = 0;
    for(int i = 0;i<100;i++) {
        suma = suma = i;
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
