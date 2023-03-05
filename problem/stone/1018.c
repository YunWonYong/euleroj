#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int i = a, j = c;
	while(i != j) {
		if (i > j) {
			break;
		}
		i += b;
		j -= d;
	}
	printf("%d\n", i);
	return 0;
}
