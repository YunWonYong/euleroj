#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n > 0 && n < 11) {
		printf("1 or more and 10 or less\n");
	} else {
		printf("less then 1 or greater then 10\n");
	}
	return 0;
}
