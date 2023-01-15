#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);

	int index = 0, result = 0;
	while(index < a) {
		if (++index % 2 != 0) {
			printf("%d ", index);
		}
	}
	
	printf("\n");
	return 0;
}

