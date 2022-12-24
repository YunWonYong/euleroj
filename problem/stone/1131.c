#include <stdio.h>

int main(void) {
	int hours, minutes, consum;
	scanf("%d %d", &hours, &minutes);
	scanf("%d", &consum);

	int calc = hours * 60 + minutes + consum;
	printf("my\n"); 
	int calcHours = calc / 60;

	if (calcHours > 23) {
		calcHours -= 24;
	}
	int calcMinutes = calc % 60;	
	printf("%d %d\n", calcHours, calcMinutes); 
	
	printf("eulerojr\n");
	calc = minutes + consum;
	calcHours = hours + calc / 60;
	calcHours %= 24;
	calcMinutes = calc % 60;
	
	printf("%d %d\n", calcHours, calcMinutes);	
	
	return 0;
}
