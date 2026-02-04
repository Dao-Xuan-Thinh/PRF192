#include <stdio.h>

//Ước chung lớn nhất (UCLN): Sử dụng thuật toán Euclid với vòng lặp while để tìm UCLN của 2 số a,b.

int main(){
    int a, b, r;
    
    printf("Nhap a: ");
    while(scanf("%d", &a) != 1 || a <= 0){
        printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    }
    
    printf("Nhap b: ");
    while(scanf("%d", &b) != 1 || b <= 0){
        printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    }
    
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    
    printf("\nUCLN la: %d", a);
    return 0;
}