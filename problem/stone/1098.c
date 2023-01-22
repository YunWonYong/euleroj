#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int min = 1, max = n - 1, s = 0;
	
	do {
		if (min > max) {
			break;
		}

		if (n % min == 0) {
			s += min;
		}

		if (max != min && n % max == 0) {
			s += max;
		}

		++min;
		--max;
	} while(0 == 0);

	printf("%d\n", s);
	return 0;
}	
