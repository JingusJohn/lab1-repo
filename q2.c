#include <stdio.h>
#include <math.h>

int main() {
    int input;
    int running = 1;
    while (running == 1) {
        printf("Please enter an integer >= 2; Enter 0 to quit: ");
        scanf("%d", &input);

        if (input == 0) {
            running  = 0;
        } else if (input >= 2) {
            checkPrime(input);
        }

    }

    return 0;
}

 void checkPrime(int input) {
    int prime = 1;
    //for (int i = 2; i <= floor(input / 2); i++) {
    for (int i = 2; i <= floor(sqrt(input)); i++) {
        if (input % i == 0) {
            prime = 0;
            printf("%d is divisible by %d and %d\n", input, i, input / i);
        }
    }
    if (prime == 1) {
        printf("%d is prime\n", input);
    }
}
