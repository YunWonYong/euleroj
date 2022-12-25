#include <stdio.h>

int main(void) {
	int l, g;
	scanf("%d %d", &l, &g);

	if (l < 0 || g < 0) {
		printf("One of a or b is negative number\n");
		return 0;
	}
	printf("both a and b are zero or more\n");
	return 0;
}
