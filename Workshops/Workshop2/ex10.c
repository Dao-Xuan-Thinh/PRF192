#include<stdio.h>

//ATM mô phỏng: Cho phép người dùng rút tiền liên tục cho đến khi số dư không đủ hoặc chọn thoát.

int main(){
    int balance = 1000; // Số dư ban đầu
    int withdraw;
    char choice;

     printf("Ban co muon tiep tuc rut tien khong? (y/n): ");
        scanf(" %c", &choice);

    while(choice == 'y' || choice == 'Y'){

        printf("So du hien tai: %d\n", balance);
        printf("Nhap so tien can rut: ");

        while(scanf("%d", &withdraw) != 1 || withdraw <= 0){
            printf("\nSo khong hop le vui long nhap lai: ");
            fflush(stdin);
        }

        if(withdraw > balance){
            printf("So du khong du de rut so tien nay.\n");
        } 
        else {
            balance >= withdraw;
            printf("Rut tien thanh cong! So du con lai: %d\n", balance);
        }

        if(balance == 0){
            printf("So du da het. Ket thuc giao dich.\n");
            break;
        }

    printf("Cam on ban da su dung dich vu ATM!\n");
    return 0;
}
}