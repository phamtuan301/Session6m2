#include <stdio.h>
int main() {
    int n;
    printf("nhap vao mot so nguyen(khac 0): ");
    scanf("%d", &n);
    printf("cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { 
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}
