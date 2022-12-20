#include <stdio.h>

int main(void) {
	printf("%lf\n", 123.4567);
	printf("%.2lf\n", 123.4567);
	printf("%.0lf\n", 123.4567);
	printf("%.lf\n", 123.4567);
	printf("%.lf\n", 123.7);
	printf("%.0lf\n", 123.4567);
	printf("%.0lf\n", 123.41);
	printf("======================\n");
	printf("1234567890123\n");
	printf("ABC%8.2lfDEF\n", 123.4567);
	printf("ABC%-8.2lfDEF\n", 123.4567);
	printf("ABC%3.2lfDEF\n", 123.4567);
	return 0;
}
