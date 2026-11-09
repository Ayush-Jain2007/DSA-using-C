#include <stdio.h>

void arrayTraversal(int size, int arr[])
{
    for (int j = 0; j < size; j++)
    {
        printf("%d\t", arr[j]);
    }
}

int insertingAnElement(int val, int pos, int size, int *arr)
{
    for (int i = size; i >= pos; i--)
    {
        if (pos != i)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = arr[i];
            arr[i] = val;
        }
    }

    return arr[size];
}

int main()
{
    int arr[11], num;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter an Element: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    arrayTraversal(10, arr);
    insertingAnElement(100, 3, 11, arr);
    printf("\n");
    arrayTraversal(11, arr);

    return 0;
}