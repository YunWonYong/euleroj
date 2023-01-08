#include <stdio.h>

int main(void) {
	int range = 0;
	scanf("%d", &range);
	while(range > 0) {
	       printf("%d ", range--);
      	}
	printf("\n");	
	return 0;
}
