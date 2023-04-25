#include <stdio.h>
#include<math.h>
struct complex {float real;
float imag;
};
void multiply(struct complex n1, struct complex n2, struct complex *result);
void divide(struct complex n1, struct complex n2, struct complex *result);
int main() {
struct complex num1, num2, mult, div;
printf("Enter first complex number:\n");
printf("Real part: ");
scanf("%f", &num1.real);
printf("Imaginary part: ");
scanf("%f", &num1.imag);
printf("Enter second complex number:\n");
printf("Real part: ");
scanf("%f", &num2.real);
printf("Imaginary part: ");
scanf("%f", &num2.imag);
multiply(num1, num2, &mult);
divide(num1, num2, &div);
printf("Multiplication: %.2f + %.2fi\n", mult.real, mult.imag);
printf("Division: %.2f + %.2fi\n", div.real, div.imag);
return 0;
}
void multiply(struct complex n1, struct complex n2, struct complex *result) {
result->real = n1.real * n2.real - n1.imag * n2.imag;
result->imag = n1.real * n2.imag + n1.imag * n2.real;
}
void divide(struct complex n1, struct complex n2, struct complex *result) {
float denominator = n2.real * n2.real + n2.imag * n2.imag;
result->real = (n1.real * n2.real + n1.imag * n2.imag) / denominator;
result->imag = (n1.imag * n2.real - n1.real * n2.imag) / denominator;
}
