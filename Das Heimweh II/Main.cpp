#include "dhii.h"

// DAS HEIMWEH II
// DEVELOPING & TESTING


int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int soruSayisi = 29;
	int dogruCevap = 0;
	int rastgeleIl = 0;
	string ilAdi = "0";
	float puan = 0;
	int hatirlatici = 0;
	
	

	/*
	cout << "Lütfen kaç soru cevaplandırmak istiyorsanız girin (En az 5): ";
	cin >> soruSayisi;
	cin.control
	*/

	for(int i=1;i<=soruSayisi;i++){
		rastgeleIl = rand() % 81 + 1;
		dhii nIl;
		cout << " * Türkçe karakter kullanmadan küçük harflerle yazın " << endl;
		cout << " " << setfill('0') << setw(2) << rastgeleIl << " plaka kodunun ait olduğu il: ";
		cin >> ilAdi;
		
		if (ilAdi == nIl.getIl(rastgeleIl)) {
			cout << " DOĞRU!" << endl;
			puan += (float)100 * 1 / soruSayisi;
		}	else {
			if (ilAdi != nIl.getIl(rastgeleIl)) {
				hatirlatici = rastgeleIl * 3 - 2;
				cout << " 1. " << nIl.getOzellik(hatirlatici) << endl << " Tekrar deneyin : ";
				cin >> ilAdi;
				if (ilAdi != nIl.getIl(rastgeleIl)) {
					hatirlatici++;
					cout << " 2. " << nIl.getOzellik(hatirlatici) << endl << " Tekrar deneyin : ";
					cin >> ilAdi;
					if (ilAdi != nIl.getIl(rastgeleIl)) {
						hatirlatici++;
						cout << " 3. " << nIl.getOzellik(hatirlatici) << endl << " Son Hakkınız   : ";
						cin >> ilAdi;
						if (ilAdi != nIl.getIl(rastgeleIl)) {
							cout << " YANLIŞ! -" << nIl.getIl(rastgeleIl) << "- olmalıydı." << endl;
							hatirlatici = 0;
						}
					}
					else { 
						cout << " DOĞRU!" << endl;
						puan += (float)100 * 1 / soruSayisi;
					}
				}
				else {
					cout << " DOĞRU!" << endl;
					puan += (float)100 * 1 / soruSayisi;
				}
			}
			else {
				cout << " DOĞRU!" << endl;
				puan += (float)100 * 1 / soruSayisi;
			}
		}

		
		
		cout << " % " << setprecision(2) << fixed << (float)puan << endl;

		this_thread::sleep_for(chrono::milliseconds(1500));
		
		cout << "\033[2J\033[0;0H";
		
	}
	
	

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
