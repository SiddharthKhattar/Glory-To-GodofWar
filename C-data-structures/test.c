#include <stdio.h>

int main()
{   
    int i, size;

    // Taking size of array from user
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    // Entering elements into the array
    for (i = 0; i <10; i++) {
        arr[i] = i;
    }

    // Printing array elements
    for (i = 0; i <10; i++) {
        printf("%d  ", arr[i]);
    }
}

    $ ./test
    Enter size: 5
    0  1  2  3  4  5  6  7  8  9

    $ ./test
    Enter size: 4
    zsh: segmentation fault (core dumped)  ./test
