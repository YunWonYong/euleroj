#include <stdio.h>

int main(void) {
	int a, b, c, d, e;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	int n = a;

	printf("%d\n", n);

	n += b;
	printf("%d\n", n);

	n += c;
	printf("%d\n", n);

	n += d;
	printf("%d\n", n);

	n += e;
	printf("%d\n", n);

	return 0;
}
