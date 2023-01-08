#include <stdio.h>

int main(void) {
	int n, s = 0, i = 0, j;

	scanf("%d", &n);
	
	
	do {
		++i;
		j = i - 1;
		s += (i * (n - j));
	} while(i < n);

	printf("%d\n", s);
	return 0;
}
