#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	int s = n - m;

	if (s > 0) {
		printf("Natural Number\n");
	} else {
		printf("0 or Negative Number\n");
	}	
	return 0;
}
