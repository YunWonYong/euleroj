#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int m;		
	if (a == b && b == c) {
		m = a * 1000 + 10000;
	} else if (a == b || a == c) {
		m = a * 100 + 1000;
	} else if (b == c) {
		m = b * 100 + 1000;
	} else {
		int s = a;
		if (s < b) {
			s = b;
		}

		if (s < c) {
			s = c;
		}

		m = s * 100;
	}

	printf("%d\n", m);
	return 0;
}
			
