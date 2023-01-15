#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int index = 0, odd = 0, event = 0;
	while(index < n) {
		++index;
		if (index % 2 == 0) {
			event += index;
			continue;
		}
		odd += index;
	}

	printf("%d\n%d\n", event, odd);
	return 0;
}
