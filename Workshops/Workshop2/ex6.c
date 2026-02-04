#include<stdio.h>
//Doesnt work and i want to kms
//Decimal -> Binary

int main(){
    int dec, preleft, bi;
    scanf("%d", &dec);

    while(dec > 0){
        preleft = dec;
        dec = dec / 2;
        
        if(dec*2 != preleft){
            bi = 1;
            printf("%d", bi-1);
        }
        else{
            bi = 0;
            printf("%d", bi+1);
        }
    }
    return 0;
}
