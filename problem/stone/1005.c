#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int index = 1;
	int range = 100;
	int sum = 0;
	
	while(index <= range) {
		sum += n * index++;
	}

	printf("%d\n", sum);
	return 0;
}
