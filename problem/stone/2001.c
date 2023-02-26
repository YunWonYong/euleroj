#include <stdio.h>

int getCount(int n, int m);

int main(void) {
	int n;
	scanf("%d", &n);
	int g5 = 5, g3 = 3, g2 = 2, temp = 0, count = 0;
	int g5C = getCount(n, g5), g3C = 0, g2C = 0;
	while (g5C > 0) {
		g3C = getCount(n - temp, g3);

		while(g3C > 0) {
			temp = g5 * g5C;
			temp += g3 * g3C;
			g2C = getCount(n - temp, g2);

			temp += g2 * g2C;
			if (g2C > 0 && temp == n) {
				printf("%d %d %d\n", g2C, g3C, g5C);
				++count;
			}
			--g3C;		
		}
		--g5C;
		temp = g5 * g5C;
	}

	printf("%d\n", count);
	return 0;
}


int getCount(int n, int m) {
	int i = 0, c = 0;
	while(1) {
		i += m;
		if (i > n || c == 10) {
			return c;
		}
		++c;
	}
}
			
