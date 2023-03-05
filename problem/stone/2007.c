#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i = 0, j = 0, k = n * 2, m = 0, flag = 0;

	while (--k > 0) {
		i += flag == 0? 1: -1;
		m = 0;
		while (++m <= n) {
			if (m <= i) {
				printf("%d", m == 10? 0: m);
			} else {
				printf(" ");
			}
		}	

		m = n;
		while (--m > 0) {
			if (m <= i) {
				printf("%d", m);
			} else {
				printf(" ");
			}
		}

		if (i == n) {
			flag = 1;
		}	

		printf("\n");
	}
	return 0;
}	
