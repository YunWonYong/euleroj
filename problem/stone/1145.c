#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int index = 0, result = 1;
	do {
		result += ++index;	
	} while(index <= a);
	printf("%d\n", result);
	return 0;
}
