#include <stdio.h>

//Game đoán số: Máy tính chọn ngẫu nhiên 1 số từ 1-100. Người dùng nhập số đoán cho đến khi đúng. Sau mỗi lần sai, máy gợi ý "Lớn hơn" hoặc "Nhỏ hơn".

int main(){
    int guess, target;

    target = (rand() % 100) + 1;

    printf("Hay doan mot so tu 1 den 100\n");
    scanf("%d", &guess);

    while(guess != target){
        if(guess < target){
            printf("Lon hon! Hay doan lai: ");
        }
        else{
            printf("Nho hon! Hay doan lai: ");
        }
        scanf("%d", &guess);
    }

    printf("Chuc mung! Ban da doan dung so %d\n", target);
}