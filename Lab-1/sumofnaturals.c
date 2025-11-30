#include <stdio.h>
int sumOfNaturals(int n) {
int sum = (n * (n + 1) / 2);
return sum;
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Sum of first %d natural numbers is: %d\n", n, sumOfNaturals(n));
return 0;
}