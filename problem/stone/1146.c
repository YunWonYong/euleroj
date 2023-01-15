#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	int index = 0;
	int range = a - 1;
	int result = 1;

	while(index < range) {
		result += ++index * 6;
	}
	printf("%d\n", result);
	return 0;
}
