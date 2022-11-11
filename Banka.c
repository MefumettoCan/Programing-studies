#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Turkish");
    int bakiye = 1000;
    int islem,tutar;
    
    printf("Bakiyeniz: %d",bakiye);
    printf("\n\n** ISLEMLER **\n");
    printf("1. Para Cekme\n");
    printf("2. Para Yatirma\n");
    printf("3. Para Bakiye Sorgulama\n");
    printf("4. Kart Iade\n");
    
    while(islem!=4){
	
    printf("\nIsleminizi seciniz : ");
    scanf("%d",&islem);
    
    switch(islem){
        case 1:
                   printf("Bakiyeniz : %d\n",bakiye);
                   printf("Cekmek istediginiz tutari giriniz : ");
                   scanf("%d",&tutar);
                   if(tutar>1000){
                   printf("Yetersiz bakiye tekrar giriniz !!");
                   scanf("%d",&tutar);
            }
                     bakiye -= tutar;
                     printf("Yeni Bakiyeniz : %d",bakiye);
                     break;
        case 2:
                     printf("Bakiyeniz : %d\n",bakiye);
                     printf("Yatirmak istediginiz tutari giriniz : ");
                     scanf("%d",&tutar);
                     bakiye += tutar;
                     printf("Yeni Bakiyeniz : %d",bakiye);
                     break;
        case 3:
                     printf("Bakiyeniz : %d\n",bakiye);
                     break; 
        case 4:
                 printf("Kartinizi almayi unutmayin!");
                     break;   
		default:
	                printf("Yanlış işlem numarası girdiniz!");        
					break;     
    }
    }
 
}
