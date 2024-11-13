#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    *a = sum;
    int diff = abs(*a - *b);
    *b = diff;
}
void main()
{
    int x, y;
    printf("Enter two values:");
    scanf("%d %d", &x, &y);
    update(&x, &y);
    printf("The SUM is:%d\nThe DIFF is:%d\n", x, y);

}
