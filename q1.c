#include <stdio.h>
#include <string.h>

int main() {

    char input[20];
    char reversed[20];

    printf("Enter an input string: ");
    // no need for pointer designation
    scanf("%[^\n]s", &input[0]);
    printf("\"%s\"\n", input);

    //printf("%d", strlen(input));

    int index = 0;
    int count = 0 ;
    for (int i = strlen(input) - 1; i >= 0; i--) {
        reversed[count++] = input[i];
    }

    printf("\"%s\"\n", reversed);

    return 0;
}
