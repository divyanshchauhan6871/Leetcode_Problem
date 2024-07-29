#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter the number of elements in array : ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("enter the element number %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("enter the number: ");
    scanf("%d", &sum);
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("[%d %d]\n", i, j);
            }
        }
    }
    return 0;
}