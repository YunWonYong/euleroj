#include <stdio.h>

int main(void) {
        int n;
        scanf("%d", &n);

        int i = 1, j = 1, k = 1, count = 0;
        while(i < 11) {
            while(j < 11) {
                while(k < 11) {
                    if(i * 2 + j * 3 + k * 5 == n) {
                        printf("%d %d %d\n", i, j, k);
                        ++count;
                    }
                    ++k;
                }
                ++j;
                k = 1;
            }
            ++i;
            j = 1;
        }
        printf("%d\n", count);
        return 0;
}
