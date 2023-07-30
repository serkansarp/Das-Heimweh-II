#include "dhii.h"


int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int soruSayisi = 0;
	int rastgeleIl = 0;
	string ilAdi = "0";
	float puan = 0;
	
	

	/*
	cout << "Lütfen kaç soru cevaplandırmak istiyorsanız girin (En az 5): ";
	cin >> soruSayisi;
	cin.control
	*/

	for(int i=0;i<5;i++){
		rastgeleIl = rand() % 81 + 1;	//5
		dhii nIl;
		cout << " * Türkçe karakter kullanmadan küçük harflerle yazın " << endl;
		cout << " " << rastgeleIl << " plaka kodunun ait olduğu il: ";
		cin >> ilAdi;
		if (ilAdi == nIl.getIl(rastgeleIl)) { cout << "doğru"; }
		else { cout << "yanlış, " << nIl.getIl(rastgeleIl) << "olmalıydı." << endl; }
		
	}
	
	// cout << rastgeleIl << " " << nIl.getIl(rastgeleIl);




	/*
		afyon -> afyonkarahisar (2005'te afyonkarahisar ismini alan afyonlular'ın çoğu afyon ismini kullanmaktadır)
		antep -> gaziantep (1921'de Gazi unvanı verilerek Gaziantep olmuştur)
		antakya -> hatay (merkez ilçe antakya, yarım puan)
		mersin -> icel (merkez ilçe mersin, yarım puan)
		urfa -> sanliurfa (1984'te şanlı unvanı alarak şanlıurfa olmuştur)
		maras -> kahramanmaras (1925'te isminin başına kahraman unvanı eklenmiştir)
		izmit -> kocaeli (Merkez ilçe izmit)
		adapazari -> sakarya (merkez ilçe adapazarı, yarım puan)
	*/



return 0;
}