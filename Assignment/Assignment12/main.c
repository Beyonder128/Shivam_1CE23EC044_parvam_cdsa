#include <stdio.h>

int countOccurrences(int *arr, int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, target;
    printf("\nEnter the size if the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element:");
    scanf("%d", &target);
    int result = countOccurrences(arr, n, target);
    printf("%d\n", result);
    return 0;
}
