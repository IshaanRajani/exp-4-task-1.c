/*wap to find all the prime numbers between two numbers using functions
Name: Ishaan Rajani
UIN: 241p008
exp: 4*/
#include <stdio.h>

int Prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

void findPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (Prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    findPrimes(start, end);

    return 0;
}
/*output:
        Enter the start of the range: 1
Enter the end of the range: 10
Prime numbers between 1 and 10 are: 2 3 5 7 
*/