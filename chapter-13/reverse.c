#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("In reverse order: ");
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return 0;
}