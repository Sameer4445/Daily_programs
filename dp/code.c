#include <stdio.h>

int main() {
    // your code goes here
    int t;
    scanf("%d", & t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", & n);
        int avg, sug;
        sug = 50 * n;
        avg = (sug * 30) / 100;
        printf("%d\n",avg);
    }
    return 0;
}