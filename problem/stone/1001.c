#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int s = n - m;
	char c = '=';
	if (s > 0) {
		c = '>';
	} else if ( s < 0) {
		c = '<';
	}

	printf("%c\n", c);
	return 0;
}
