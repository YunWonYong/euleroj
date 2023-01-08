#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	int sum = 0, b = 1;
	while(b <= a) {
		sum += b++;
	}
	printf("%d", sum);

	return 0;
}
