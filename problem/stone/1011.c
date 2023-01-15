#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int min = 1, max = n, result = 0, mid = n / 2, temp = 0;
	
	do {
		temp = max;
		while(min <= temp) {
			if(min * temp == n) {
				result = result + min;
				if (min != temp) {
					result = result + temp;
				}
				max = temp;
				break;
			}
			--temp;
		}
	} while(++min <= mid);
	printf("%d\n", result);
	return 0;
}
