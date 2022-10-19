	#include<stdio.h>
	#include<locale.h>	
	
	main()
	{
		
	setlocale(LC_ALL, "Turkish"); 	
	
	int x;
	int y;
	int sonuc;
	int kalan;

	printf("Bölünecek sayı = ");
	scanf ("%f" ,&x);
	
	printf("Bölecek sayı = ");	
	scanf ("%d" ,&y);
	
	sonuc = x / y;
	//sonucu gösterir
	kalan = x % y;
	//Kalanı girer
	printf("\n Sonuç: %d" ,sonuc);
	printf("\n Kalan: %d" ,kalan);
	}
