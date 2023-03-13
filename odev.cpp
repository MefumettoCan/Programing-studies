#include <iostream>
#include <locale>
using namespace std;

struct Ogrenci {
    string ad;
    int numara;
    int test[100];
    float ortalama;
    char harfNotu;
};

void veriAl(Ogrenci ogrenciler[], int ogrenciSayisi, int testSayisi) {
    for (int i = 0; i < ogrenciSayisi; i++) {
    	cout <<endl;
        cout << i+1 <<". Öğrencinin adını girin: ";
        cin >> ogrenciler[i].ad;
        cout << i+1 << ". Öğrencinin numarasını girin: ";
        cin >> ogrenciler[i].numara;

        for (int j = 0; j < testSayisi; j++) {
            cout << i+1 << ". Öğrenci için " << j+1 << ". test notunu girin: ";
            cin >> ogrenciler[i].test[j];
            
        }
    }
}


double notHesapla(Ogrenci &ogrenci, int testSayisi) {
    float toplam = 0;
    for (int i = 0; i < testSayisi; i++) {
        toplam += ogrenci.test[i];
    }
    ogrenci.ortalama = toplam / testSayisi;

    if (ogrenci.ortalama >= 85) {
        ogrenci.harfNotu = 'A';
    } else if (ogrenci.ortalama <= 84 && ogrenci.ortalama >= 75) {
        ogrenci.harfNotu = 'B';
    } else if (ogrenci.ortalama <= 74 && ogrenci.ortalama >= 65) {
        ogrenci.harfNotu = 'C';
    } else if (ogrenci.ortalama <= 64 && ogrenci.ortalama >= 50) {
        ogrenci.harfNotu = 'D';
    } else {
        ogrenci.harfNotu = 'F';
    }

    return ogrenci.ortalama;
}

void goster(Ogrenci ogrenciler[], int ogrenciSayisi, int testSayisi) {
    for (int i = 0; i < ogrenciSayisi; i++) {
        cout << i+1 << " öğrenci -> " << ogrenciler[i].ad << " / No: " << ogrenciler[i].numara << endl;
        for (int j = 0; j < testSayisi; j++) {
            cout << j+1 << ". test notu: " << ogrenciler[i].test[j] << endl;
        }
        cout << "Not Ortalaması: " << ogrenciler[i].ortalama;
        cout << " - Harf notu: " << ogrenciler[i].harfNotu << endl << endl;
    }
}


int main() {
	setlocale(LC_ALL, "turkish");
	
    int ogrenciSayisi, testSayisi;
    cout << "Öğrenci sayısını girin: ";
    cin >> ogrenciSayisi;
    cout << "Test sayısını girin: ";
    cin >> testSayisi;
    
    cout<<endl<<endl;

    Ogrenci *ogrenciler = new Ogrenci[ogrenciSayisi];
    
    

    veriAl(ogrenciler, ogrenciSayisi, testSayisi);
    
   for (int i = 0; i < ogrenciSayisi; i++) {
    ogrenciler[i].ortalama = notHesapla(ogrenciler[i], testSayisi);
    }
    
    cout<<endl;
    cout << "->  SINIF  <-" << endl << endl;

   goster(ogrenciler, ogrenciSayisi, testSayisi);


  
    return 0;
}
