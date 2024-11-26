#include <stdio.h>
int main() {
    int num;
    int sochan = 0, sole = 0;
	printf("moi ban nhap 5 so nguyen\n"); 
    for (int i = 1; i <= 5; i++) {
        printf("nhap so nguyen : ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            sochan++; 
        } else {
            sole++;  
        }
    }
    printf("so luong so chan: %d\n", sochan);
    printf("so luong so le: %d\n", sole);

    return 0;
}
