#include <stdio.h>
int main(void) {
	int a;
	scanf("%d", &a);
	int index = 1;
	do {
		printf("%d*%d=%d\n", a, index, a * index);
	} while(++index < 10);
	return 0;
}
