#include <stdio.h>

int main(void) {
	int i = 0, c = 65;

	do {
		printf("%c\n", c);
		++c;
	} while(++i < 5);
	return 0;
}
