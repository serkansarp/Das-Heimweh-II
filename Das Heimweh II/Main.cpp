#include "dhii.h"


// DAS HEIMWEH II
// DEVELOPING & TESTING


int main(){
	setlocale(LC_ALL, "Turkish");
	
	srand(time(NULL));
	int soruSayisi = 0;
	int dogruCevap = 0;
	int rastgeleIl = 0;
	string ilAdi = "0";
	float puan = 0;
	int hatirlatici = 0;
	
	
	cout << " ________   Serkan SARP's    ___ ___         .__                      .__      .___.___" << endl;
	cout << " \\______ \\ _____    ______  /   |   \\   ____ |__| _______  _  __ ____ |  |__   |   |   |" << endl;
	cout << "  |    |  \\\\__  \\  /  ___/ /    ~    \\_/ __ \\|  |/     \\ \\/ \\/ // __ \\|  |  \\  |   |   |" << endl;
	cout << "  |    `   \\/ __ \\_\\___ \\  \\    Y    /\\  ___/|  |  Y Y  \\     /\\  ___/|   Y  \\ |   |   |" << endl;
	cout << " /_______  (____  /____  >  \\___|_  /  \\___  >__|__|_|  /\\/\\_/  \\___  >___|  / |___|___|" << endl;
	cout << "         \\/     \\/     \\/         \\/ 2023  \\/         \\/            \\/     \\/  " << endl;
	cout << " ---------------------------------------------------------------------------------------- " << endl << endl;
	cout << " - Das Heimweh (Sıla Hasreti) oyunumun 2'nci versiyonu olarak geliştirilmiştir." << endl;
	cout << " - İlk oyun, yurt dışına göç eden software developerlar, doktorlar ve diğer yurt dışında" << endl;
	cout << "   yaşayan Türk vatandaşları düşünülerek, ilin ismini verip plaka kodunu istemekteydi." << endl;
	cout << " - Bu versiyonda plaka kodu verilen ilin adı  istenmekte  olup yanlış cevaplar için 3'er" << endl;
	cout << "   ipucu da eklenmiştir. İpuçları, sorunun tam puanından 1/4 oranında eksiltilir." << endl;
	cout << " - İlk cevapta doğru bilirseniz soru için atanan en yüksek puanı alırsınız." << endl;
	cout << " - İpuçları ilk oyunun amacını daha fazla yerine getirmesi için eklenmiş bir özelliktir." << endl;
	cout << " - Ayrıca kalan soru sayısı ve güncel puan durumunuz sürekli ekranda görüntülenir." << endl;
	cout << " - Cevapları Türkçe karakter kullanmadan ve küçük harfle yazın." << endl << endl;
	cout << " ---------------------------------------------------------------------------------------- " << endl;
	
	cout << " Lütfen kaç soru cevaplandırmak istiyorsanız girin (En az 5): ";
	cin >> soruSayisi;
	if (soruSayisi < 5)
		soruSayisi = 5;
	
	cout << "\x1B[8;0H\x1B[J";

	for(int i=1;i<=soruSayisi;i++){
		cout << " Puanınız: " << puan << " / 100   -  " << soruSayisi - i << " soru kaldı." << endl << endl;
		rastgeleIl = rand() % 81 + 1;
		dhii nIl;
		cout << " " << setfill('0') << setw(2) << rastgeleIl << " plaka kodunun ait olduğu il: ";
		cin >> ilAdi;
		


		if (ilAdi==nIl.getIl(rastgeleIl)) {	// Kullanıcı ilk hakkında biliyor
			cout << endl << " DOĞRU! - " << 100 / soruSayisi << " Puan" << endl;
			puan += 100 / soruSayisi;
		}
		else {
			cout << endl << " 1. İpucu: " << nIl.getOzellik(rastgeleIl * 3 - 2) << endl;
			cout << " Tekrar deneyin: ";
			cin >> ilAdi;
			if (ilAdi == nIl.getIl(rastgeleIl)) {
				cout << endl << " DOĞRU! - " << 100 / soruSayisi * 0.75 << " Puan" << endl;	// Kullanıcı 2. hakkında biliyor
				puan += 100 / soruSayisi * 0.75;
			}
			else {
				cout << endl << " 2. İpucu: " << nIl.getOzellik(rastgeleIl * 3 - 1) << endl;
				cout << " Tekrar deneyin: ";
				cin >> ilAdi;
					if (ilAdi == nIl.getIl(rastgeleIl)) {
						cout << endl << " DOĞRU! - " << 100 / soruSayisi * 0.5 << " Puan" << endl;	// Kullanıcı 3. hakkında biliyor
						puan += 100 / soruSayisi * 0.5;
					}
					else {
						cout << endl << " 3. İpucu: " << nIl.getOzellik(rastgeleIl * 3) << endl;
						cout << " Tekrar deneyin: ";
						cin >> ilAdi;
							if (ilAdi == nIl.getIl(rastgeleIl)) {
								cout << " DOĞRU! - " << 100 / soruSayisi * 0.25 << " Puan" << endl;	// Kullanıcı 4. hakkında biliyor
								puan += 100 / soruSayisi * 0.25;
							}
							else {
								cout << endl << " Yanlış... - " << nIl.getIl(rastgeleIl) << " - olmalıydı." << endl;
							}
					}
			}
		}

		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "\x1B[8;0H\x1B[J";
		
	}

	cout << " Puanınız: " << puan << "/ 100" << endl;
	cout << " Daha hassas bir değerlendirme için daha yüksek soru sayısı belirleyin." << endl << endl;

return 0;
}
