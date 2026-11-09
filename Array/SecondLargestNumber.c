#include <stdio.h>

int main()
{
    int arr[10], num;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Element: ");
        scanf("%d", &num);
        arr[i] = num;
    }

    int max = arr[0];
    for (int j = 1; j < 10; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    int second_max = arr[0];
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] > second_max && arr[j] != max)
        {
            second_max = arr[j];
        }
    }
    printf("Largest Number is %d and second largest number is %d.", max, second_max);

    return 0;
}