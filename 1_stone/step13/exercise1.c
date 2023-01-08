#include <stdio.h>

int main(void) {
	int range = 0;
	scanf("%d", &range);
	int index = 0;
	while(index < range) {
		printf("%d ", ++index);
	}
	printf("\n");
	return 0;
}
