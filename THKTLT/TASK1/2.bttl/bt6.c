#include <stdio.h>
#include <math.h>
double tinh(double x, double y) {
    double tu_so = exp(x + y) - log(pow(x, 2) - y);
    double mau_so = cos(x + y) - sin(x);
     if (mau_so == 0) {
        printf("Loi: Ham khong xac dinh.\n");
        return 0;
    }
    double ket_qua = tu_so / mau_so;
    return ket_qua;
}
int main() {
    double x, y;
    printf("Nhap gia tri cua x: ");
    scanf("%lf", &x);
    printf("Nhap gia tri cua y: ");
    scanf("%lf", &y);
    double ketqua = tinh(x, y);
    printf("Gia tri cua hàm g là: %lf\n", ketqua);
    return 0;
}
