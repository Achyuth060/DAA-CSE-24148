#include <stdio.h>
int sumOfSquares(int n) {
return (n * (n + 1) * (2 * n + 1)) / 6;
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum of squares of first %d natural numbers is: %d\n", n, sumOfSquares(n));
return 0;
}