#include <stdio.h>

int main(void) {
	double a, b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
	printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
	printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
	printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);

	return 0;
}
