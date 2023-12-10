#include <stdio.h>
int main() {
    float a1, b1, c1, a2, b2, c2;
    float x, y;
      printf("Nhap he so a1: ");
    scanf("%f", &a1);
      printf("Nhap he so b1: ");
    scanf("%f", &b1);
      printf("Nhap he so c1: ");
    scanf("%f", &c1);
     printf("Nhap he so a2: ");
    scanf("%f", &a2);
      printf("Nhap he so b2: ");
    scanf("%f", &b2);
      printf("Nhap he so c2: ");
    scanf("%f", &c2);

    float D = a1 * b2 - a2 * b1;
    float Dx = c1 * b2 - c2 * b1;
    float Dy = a1 * c2 - a2 * c1;
    
    if (D != 0) {
        x = Dx / D;
        y = Dy / D;
        printf("Nghiem cua he phtrinh là: x = %.2f, y = %.2f\n", x, y);
    } else {
        if (Dx == 0 && Dy == 0) {
            printf("Vo so nghiem.\n");
        } else {
            printf("Vo nghiem.\n");
        }
    }

    return 0;
}
