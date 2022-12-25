#include <stdio.h>

int main(void) {
	int k, n, m;
	scanf("%d %d %d", &k, &n, &m);

	int s = k * n;
	s -= m;
	if (s <= 0) {
		s = 0;
	} 
	printf("%d\n", s);
	return 0;
}	
