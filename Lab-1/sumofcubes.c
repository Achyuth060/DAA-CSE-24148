#include <stdio.h>
int sumOfCubes(int n) {
int sum = (n * (n + 1) / 2);
return sum * sum;
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum of cubes of first %d natural numbers is: %d\n", n, sumOfCubes(n));
return 0;
}