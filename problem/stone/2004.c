#include <stdio.h>

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);
	
	int c = 2;
	if (n * 2 % k == 0) {
		c = n * 2 / k;
	} else {
		c = n * 2;
		c = c / k + 1;
	}
	
	printf("%d\n", c);
	return 0;
}
