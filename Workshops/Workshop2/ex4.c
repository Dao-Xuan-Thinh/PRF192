#include<stdio.h>

int main(){
    int n, dao = 0;
    
    printf("Nhap n: ");
    while(scanf("%d", &n) != 1 || n < 0){
        printf("\nSo khong hop le vui long nhap lai: ");
        fflush(stdin);
    }
    
    while(n != 0){
        printf("\n(Line 1)n = %d, dao = %d", n, dao);
        dao = dao * 10 + n % 10;
        printf("\n(Line 2)n = %d, dao = %d", n, dao);
        n = n / 10;
        printf("\n(Line 3)n = %d, dao = %d\n", n, dao);
    }
    printf("\nSo dao nguoc la: %d", dao);
}