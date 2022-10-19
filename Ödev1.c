#include <stdio.h>
#include <conio.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "Turkish");
	
    int x;

    printf("\n Ogrenci notu giriniz: ");
    scanf("%d" ,&x);

    if(x >= 0 ,x <=25){
        printf("\nF ile kaldı");
    }

    else if (x >= 26 ,x <= 50){
        printf("\nD ile şartlı geçti");
    }

    else if (x >= 51 ,x <= 70){
        printf("\nC ile geçti");
    }

    else if (x >= 71 ,x <= 80){
        printf("\nB ile geçti");
    }

    else if (x >= 81 ,x <= 100){
        printf("\nA ile başarılı geçti");
    }

    else {
        printf("\nHatalı not girişi yaptınız");
    }

    getch();
}
