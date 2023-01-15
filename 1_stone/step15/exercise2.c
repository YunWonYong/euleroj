#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	int index = 5, result = 0;
	while(index <= a) {
	
		result += index;
		index += 5;
	}

	printf("%d\n", result);
	return 0;
}

