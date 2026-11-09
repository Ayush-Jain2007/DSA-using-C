#include <stdio.h>

int main() {
    int arr[20],size,pos,num;

    printf("Array Size should be: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    
    printf("Smallest Number is %d at position %d.",min,pos);

    return 0;
}