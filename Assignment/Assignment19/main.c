#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
   printf("Enter the the string elements:");
    scanf("%s", str);
    int freq[10] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            freq[str[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d: %d\n", i, freq[i]);
    }
    return 0;
}
