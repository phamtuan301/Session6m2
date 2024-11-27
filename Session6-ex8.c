#include <stdio.h>
#include <math.h>
int main() {
    double in, add, out, lai;
    int months;
    printf("nhap so tien gui (VND): ");
    scanf("%lf", &in);
    printf("nhap lai suat hang thang (%%): ");
    scanf("%lf", &add);
    printf("so thang gui: ");
    scanf("%d", &months);
    add = add / 100;
	out = in * pow(1 + add, months);
	lai = out - in;
    printf("so tien lai sau %d thang la: %f VND\n", months, lai);
    printf("tong so tien nhan duoc sau %d thang la: %f VND\n", months, out);
    return 0;
}
