#include <stdio.h>

int main(void) {
	int c = 7;

	printf("%d\n", ++c); // 8
	printf("%d\n", c++); // 8
	printf("%d\n", c++); // 9
	printf("%d\n", c--); // 10
	printf("%d\n", --c); // 8
	return 0;
}
