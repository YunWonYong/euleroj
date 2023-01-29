#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int cnt = 0;
	while (i <= n) {
		j = i;
		while(j <= n) {
			cnt += 2;
			++j;
		}
		++i;
	}
	printf("%d\n", cnt);
	return 0;
}
