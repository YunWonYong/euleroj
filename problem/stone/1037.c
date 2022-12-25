#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int s = a + b + c + d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int t = a + b + c + d;

	int h = s;

	if (s < t) {
		h = t;
	}

	printf("%d", h);
	return 0;
}
