#include <stdio.h>

int main(void) {
        int n;
        scanf("%d", &n);

        int min = 1, max = n, result = 0, mid = n / 2, temp;
        do {
                temp = max;
                while(min <= temp) {
                        if(min * temp == n) {
                                result = result + 2;
                                if (min == temp) {
                                        --result;
                                }
                                --max;
                                break;
                        }
                        --temp;
                }
        } while(++min <= mid);
        printf("%d\n", result);
        return 0;
}
