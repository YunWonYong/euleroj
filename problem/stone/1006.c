#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int i = 0, s = 0;
	while(i < n) {
		++i;
		s += (i * i);
	}

	printf("%d\n", s);
	return 0;
}
