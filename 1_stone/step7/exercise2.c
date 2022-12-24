#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int n = a + b + c;
	
	printf("%d\n", n);
	printf("%.2lf\n", (double)n / 3.0);
	return 0;
}
