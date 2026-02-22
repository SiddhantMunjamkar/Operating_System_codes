#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int global_Var = 10;

int main()
{
    int local_var = 20;
    int *heap_var = malloc(sizeof(int));
    *heap_var = 30;

    printf("Process ID: %d\n", getpid());
    printf("Global var: %p\n", &global_Var);
    printf("Local var: %p\n", &local_var);
    printf("Heap var: %p\n", heap_var);

    while (1) // infinite loop
        ;
    return 0;
}




