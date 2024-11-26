#include <stdio.h>

int main() {
    int x, sum = 0;
    for (int i = 1; i <= 5; i++) {
    	printf("nhap so nguyen:\n");
        scanf("%d", &x);
        if (x % 2 != 0) {
            sum += x; 
        }
    }
    printf("tong cac so le trong 5 so da nhap la: %d\n", sum);
    return 0;
}
