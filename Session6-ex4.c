#include <stdio.h>
#include <math.h> 
int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("phuong trinh khong phai phuong trinh bac 2\n");
        return 0; 
    }
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %f, x2 = %f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("phuong trinh co nghiem kep: x1 = x2 = %f\n", x1);
    } else {
        printf("phuong trinh vo nghiem.\n");
    }

    return 0;
}
