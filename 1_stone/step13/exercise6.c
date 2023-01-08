#include <stdio.h>

int main(void) {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);	
	while(a <= b) {
		sum += a++;
	}
	printf("%d\n", sum);
	return 0;
}
