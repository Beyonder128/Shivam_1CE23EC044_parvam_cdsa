#include <stdio.h>
void main() {
    int n, x;
    printf("Enter the size of the array and the element to be searched:");
    scanf("%d %d", &n, &x);
    int arr[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
