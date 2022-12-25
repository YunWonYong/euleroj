#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int c = 3;	
	if (a == 1 && b == 1) {
		c = 1;
	} else if (a == 1 || b == 1) {
		c = 2;
	}
	
	printf("%d\n", c);	
	return 0;
}
