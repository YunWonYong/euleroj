#include <stdio.h>

int main(void) {

	int e = 7;

	printf("%d\n", --e); // 6;
	printf("%d\n", e--); // 6
	printf("%d\n", e++); // 5
	printf("%d\n", ++e); // 7
	e++;
	printf("%d\n", e); // 8
	return 0;
}
