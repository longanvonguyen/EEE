#include <stdio.h>
#include <stdlib.h>

int songuyen(int n) {
    if (n<=1){
        return 0; //so <1 khong phai la so nguyen to
    }
    for (int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0; //so chia het cho i khong phai so nguyen to
        }
    }
    return 1; //tra ve true khi la so nguyen to
}
int main(int argc, char *argv[]){
    if (argc !=3){
        printf("su dung: %s <a> <b>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
if(a>b){
    printf("a phai nho hon b. \n");
    return 1;
}
printf("cac so nguyen to tu %d den %d la :\n",a,b);
for (int i=a; i<=b; i++){
    int songuyen =1;
    if (i<=1){
        songuyen = 0;
    }
    for (int j =2;j*j<=i; j++){
        if(i%j==0){
            songuyen=0;
            break;
        }
    }
        if (songuyen){
            printf("%d\n",i);
        }
    }
    return 0 ;
}