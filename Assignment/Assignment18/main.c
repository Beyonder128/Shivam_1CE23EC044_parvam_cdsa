#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter the sentence:");
    scanf("%[^\n]", s);
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    free(s);
    return 0;
}
