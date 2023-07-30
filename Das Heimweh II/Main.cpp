#include "dhii.h"

// DAS HEIMWEH II
// DEVELOPING & TESTING


int main(){
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int soruSayisi = 18;
	int dogruCevap = 0;
	int rastgeleIl = 0;
	string ilAdi = "0";
	float puan = 0;
	
	

	/*
	cout << "Lütfen kaç soru cevaplandırmak istiyorsanız girin (En az 5): ";
	cin >> soruSayisi;
	cin.control
	*/

	for(int i=1;i<=soruSayisi;i++){
		rastgeleIl = rand() % 81 + 1;
		dhii nIl;
		cout << " * Türkçe karakter kullanmadan küçük harflerle yazın " << endl;
		cout << " " << rastgeleIl << " plaka kodunun ait olduğu il: ";
		cin >> ilAdi;
		
		if (rastgeleIl == 3 && ilAdi == "afyon") {
			cout << "NOT: 2005'te Afyonkarahisar ismini almış olan il Afyon olarak da anılır." << endl;
			puan += 100 * 1 / soruSayisi;
			cout << " PUAN: " << (float)puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}
					
		if (rastgeleIl == 27 && ilAdi == "antep") {
			cout << "YARIM PUAN: 1921'de Gazi unvanı verilerek Gaziantep olmuştur." << endl;
			puan += 100 * 1 / soruSayisi/2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}

		if (rastgeleIl == 31 && ilAdi == "antakya") {
			cout << "YARIM PUAN: Antakya, Hatay'ın merkez ilçesidir." << endl;
			puan += 100 * 1 / soruSayisi / 2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}

		if (rastgeleIl == 33 && ilAdi == "mersin") {
			cout << "YARIM PUAN: Mersin, İçel'in merkez ilçesidir." << endl;
			puan += 100 * 1 / soruSayisi / 2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}
		
		if (rastgeleIl == 41 && ilAdi == "izmit") {
			cout << "YARIM PUAN: İzmit, Kocaeli'nin merkez ilçesidir." << endl;
			puan += 100 * 1 / soruSayisi / 2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}

		if (rastgeleIl == 46 && ilAdi == "maras") {
			cout << "YARIM PUAN: 1925'te isminin başına Kahraman unvanı eklenerek Kahramanmaraş olmuştur." << endl;
			puan += 100 * 1 / soruSayisi / 2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}

		if (rastgeleIl == 54 && ilAdi == "adapazari") {
			cout << "YARIM PUAN: Adapazarı, Sakarya'nın merkez ilçesidir." << endl;
			puan += 100 * 1 / soruSayisi / 2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}

		if (rastgeleIl == 63 && ilAdi == "urfa") {
			cout << "YARIM PUAN: 1984'te isminin başına Şanlı unvanı eklenerek Şanlıurfa olmuştur" << endl;
			puan += 100 * 1 / soruSayisi / 2;
			cout << " PUAN: " << puan << endl;
			this_thread::sleep_for(chrono::milliseconds(1500));
		}

		if (ilAdi == nIl.getIl(rastgeleIl)) {
			cout << " DOĞRU!" << endl;
			puan += 100 * 1 / soruSayisi;
		}
		else { cout << " YANLIŞ, " << nIl.getIl(rastgeleIl) << " olmalıydı." << endl; }
		
		cout << " PUAN: " << (float)puan << endl;

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