#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

Complex readComplexNumber() {
    Complex num;
    printf("Enter real part: ");
    scanf("%lf", &num.real);
    printf("Enter imaginary part: ");
    scanf("%lf", &num.imag);
    return num;
}

void writeComplexNumber(Complex num) {
    printf("Complex number: %.2lf + %.2lfi\n", num.real, num.imag);
}

Complex addComplexNumbers(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

Complex multiplyComplexNumbers(Complex num1, Complex num2) {
    Complex product;
    product.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    product.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return product;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplexNumber();

    printf("Enter the second complex number:\n");
    num2 = readComplexNumber();

    sum = addComplexNumbers(num1, num2);
    printf("Sum of the complex numbers: %.2lf + %.2lfi\n", sum.real, sum.imag);

    product = multiplyComplexNumbers(num1, num2);
    printf("Product of the complex numbers: %.2lf + %.2lfi\n", product.real, product.imag);

    return 0;
}
