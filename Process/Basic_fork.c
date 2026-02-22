#include <stdio.h>
#include <unistd.h>

int global_var = 100;

int main()
{

    int local_var = 20;

    printf("Process ID: %d\n", getpid());
    printf("Global var: %d\n", &global_var);
    printf("Local var: %d\n", &local_var);

    while (1) // infinite loop
        ;
    return 0;
}