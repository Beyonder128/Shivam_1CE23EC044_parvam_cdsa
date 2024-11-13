#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

void main()
{
    int t;
    printf("ENter the number of testcases:");
    scanf("%d", &t);

    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;

        printf("Enter the size of the array:");
        scanf("%d", &n);

        int arr[n];
        printf("Enter the elements of the array:");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);
        int max1 = arr[n - 1];
        int max2 = arr[n - 2];
        // If the two largest elements are the same, find the next largest distinct element
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] != max1) {
                max2 = arr[i];
                break;
            }
        }
        printf("%d\n", max1 + max2);
    }

}
