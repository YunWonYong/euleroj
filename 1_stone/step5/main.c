#include <stdio.h>

int main(void) {
	int a = 0;

	printf("integer input: ");
	scanf("%d", &a);
	printf("  input: %d\n", a);

	char c;
	printf("char input: ");
	scanf("%c", &c);
	scanf("%c", &c);
	printf("  input: %c\n", c);

	double b = 0.0;
	printf("float input: ");
	scanf("%lf", &b);
	printf("  input: %.2lf\n", b);

	char d = ' ';
	printf("ASCII input: ");
	scanf("%c", &d);
	scanf("%c", &d);
       	printf("  input: %d\n", d);	
	return 0;
}
