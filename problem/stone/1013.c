#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int index = 1, result = 0;

	do {
		if (index % 5 == 0 || index % 3 == 0) {
			result += index;
		}
	} while(++index < n);
	printf("%d\n", result);
	return 0;
}

