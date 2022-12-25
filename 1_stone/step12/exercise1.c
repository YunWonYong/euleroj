#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	char c = 'A';

	if (n < 60) {
		c = 'F';
	} else if (n > 59 && n < 70) {
		c = 'D';
	} else if (n > 69 && n < 80) {
		c = 'C';
	} else if (n > 79 && n < 90) {
		c = 'B';
	}
	
	printf("%c\n", c);
	
	int s = n / 10;
	
	switch(s) {
	case 10:
	case 9:
		c = 'A';
		break;
	case 8:
		c = 'B';
		break;
	case 7:
		c = 'C';
		break;
	case 6:
		c = 'D';
		break;
	default:
		c = 'F';
		break;
	}

	printf("%c\n", c);	
	return 0;
}
