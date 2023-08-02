// Das Heimweh II.h: Standart sistem ekleme dosyaları için ekleme dosyası,
// veya projeye özgü ekleme dosyaları.

#pragma once


#include <iostream>
#include <string>
#include <clocale>
#include <time.h>
#include <thread>
#include <chrono>
#include <iomanip>

using namespace std;
class dhii {
public:
	// Getterlar (setter gereksiz)
	string getOzellik(int);
	string getIl(int);

private:
	string il[82] = { "0","adana","adiyaman","afyonkarahisar","agri","amasya","ankara","antalya","artvin","aydin","balikesir",
"bilecik","bingol","bitlis","bolu","burdur","bursa","canakkale","cankiri","corum","denizli",
"diyarbakir","edirne","elazig","erzincan","erzurum","eskisehir","gaziantep","giresun","gumushane","hakkari",
"hatay","isparta","icel","istanbul","izmir","kars","kastamonu","kayseri","kirklareli","kirsehir",
"kocaeli","konya","kutahya","malatya","manisa","kahramanmaras","mardin","mugla","mus","nevsehir",
"nigde","ordu","rize","sakarya","samsun","siirt","sinop","sivas","tekirdag","tokat",
"trabzon","tunceli","sanliurfa","usak","van","yozgat","zonguldak","aksaray","bayburt","karaman",
"kirikkale","batman","sirnak","bartin","ardahan","igdir","yalova","karabuk","kilis","osmaniye",
"duzce" };
	string ozellik[244] = { "0",
		/* 01-adana */				"Akdeniz Bölgesi'ndedir.","Seyhan, Ceyhan ve Çukurova ünlü ilçelerindendir.","Kebabı ile ünlüdür",
		/* 02-adiyaman */			"Güneydoğu Anadolu Bölgesi'ndedir.","Besni üzümü isimli kuru meyvesiyle bilinir.","Nemrut Dağı burada bulunur.",
		/* 03-afyonkarahisar */		"Ege Bölgesi'ndedir.","Kaymağı ile ünlüdür.","Sucuk burada yenir.",
		/* 04-agri */				"Doğu Anadolu Bölgesi'ndedir.","İshak Paşa Sarayı bu ildedir.","Türkiye'nin en yüksek dağı buradadır ve ilin ismiyle anılır.",
		/* 05-amasya */				"Karadeniz Bölgesi'ndedir.","Pontus krallarının Kral Kaya Mezarları ilin gezilecek yerlerindendir.","Elmalarıyla meşhurdur.",
		/* 06-ankara */				"İç Anadolu Bölgesi'ndedir.","Anıtkabir bu ilde bulunur.","Türkiye'nin başkentidir.",
		/* 07-antalya */			"Akdeniz Bölgesi'ndedir.","Portakalata isimli içeceği burada içebilirsiniz.","En bilinen ilçesi Alanya'dır.",
		/* 08-artvin */				"Karadeniz Bölgesi'ndedir.","Hopa, bilinen ilçelerindendir.","Balı dünyaca ünlüdür.",
		/* 09-aydin */				"Ege Bölgesi'ndedir.","İncir yetiştiriciliği ile tanınır.","Efeleri meşhurdur.",
		/* 10-balikesir */			"Marmara Bölgesi'ndedir.","Höşmerim burada yenir.","Susurluk Ayranı en bilinen içeceğidir.",
		/* 11-bilecik */			"Marmara Bölgesi'ndedir.","Kayı Boyu ve Osmanlı denildiğinde akla gelen ilk illerdendir.","Bıldırcın Kebabı, meşhur yiyeceklerindendir.",
		/* 12-bingol */				"Doğu Anadolu Bölgesi'ndedir.","Hazarşah Köyü'ndeki tamamen doğal bir oluşum olan Yüzen Adalar, şehre ün katmıştır.","Ayran çorbası ile meşhurdur.",
		/* 13-bitlis */				"Doğu Anadolu Bölgesi'ndedir.","Büryan Kebabı ile meşhurdur.","Beş Minare bu ildedir.",
		/* 14-bolu */				"Karadeniz Bölgesi'ndedir.","Kozalak reçeli ve Çam balı burada bulunur.","Abant Gölü buradadır.",
		/* 15-burdur */				"Akdeniz Bölgesi'ndedir.","Mermer sanayisinin markalaşma alanıdır.","Gidildiğinde Gazel böreği yenilmeden dönülmez.",
		/* 16-bursa */				"Marmara Bölgesi'ndedir.","Şeftalisiyle ünlüdür.","Uludağ, bu ilin sınırları içerisindedir.",
		/* 17-canakkale */			"Marmara Bölgesi'ndedir.","Truva Antik Kenti burada bulunur.","Boğazı, ülkenin önemli gelir kaynaklarındandır.",
		/* 18-cankiri */			"İç Anadolu Bölgesi'ndedir.","Sarımsaklı et yemeği tescillidir.","Kaya tuzu, Türkiye tuz üretiminin önemli bir bölümünü karşılar.",
		/* 19-corum */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 20-denizli */			"Ege Bölgesi'ndedir.","bu","o",
		/* 21-diyarbakir */			"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 22-edirne */				"Marmara Bölgesi'ndedir.","bu","o",
		/* 23-elazig */				"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 24-erzincan */			"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 25-erzurum */			"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 26-eskisehir */			"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 27-gaziantep */			"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 28-giresun */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 29-gumushane */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 30-hakkari */			"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 31-hatay */				"Akdeniz Bölgesi'ndedir.","bu","o",
		/* 32-isparta */			"Akdeniz Bölgesi'ndedir.","bu","o",
		/* 33-icel */				"Akdeniz Bölgesi'ndedir.","bu","o",
		/* 34-istanbul */			"Marmara Bölgesi'ndedir.","bu","o",
		/* 35-izmir */				"Ege Bölgesi'ndedir.","bu","o",
		/* 36-kars */				"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 37-kastamonu */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 38-kayseri */			"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 39-kirklareli */			"Marmara Bölgesi'ndedir.","bu","o",
		/* 40-kirsehir */			"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 41-kocaeli */			"Marmara Bölgesi'ndedir.","bu","o",
		/* 42-konya */				"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 43-kutahya */			"Ege Bölgesi'ndedir.","bu","o",
		/* 44-malatya */			"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 45-manisa */				"Ege Bölgesi'ndedir.","bu","o",
		/* 46-kahramanmaras */		"Akdeniz Bölgesi'ndedir.","bu","o",
		/* 47-mardin */				"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 48-mugla */				"Ege Bölgesi'ndedir.","bu","o",
		/* 49-mus */				"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 50-nevsehir */			"İç Anadolu Bölgesi'ndedir.","Testi Kebabı ile ünlüdür.","Peribacaları buradadır.",
		/* 51-nigde */				"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 52-ordu */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 53-rize */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 54-sakarya */			"Marmara Bölgesi'ndedir.","bu","o",
		/* 55-samsun */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 56-siirt */				"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 57-sinop */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 58-sivas */				"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 59-tekirdag */			"Marmara Bölgesi'ndedir.","bu","o",
		/* 60-tokat */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 61-trabzon */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 62-tunceli */			"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 63-sanliurfa */			"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 64-usak */				"Ege Bölgesi'ndedir.","bu","o",
		/* 65-van */				"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 66-yozgat */				"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 67-zonguldak */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 68-aksaray */			"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 69-bayburt */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 70-karaman */			"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 71-kirikkale */			"İç Anadolu Bölgesi'ndedir.","bu","o",
		/* 72-batman */				"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 73-sirnak */				"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 74-bartin */				"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 75-ardahan */			"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 76-igdir */				"Doğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 77-yalova */				"Marmara Bölgesi'ndedir.","bu","o",
		/* 78-karabuk */			"Karadeniz Bölgesi'ndedir.","bu","o",
		/* 79-kilis */				"Güneydoğu Anadolu Bölgesi'ndedir.","bu","o",
		/* 80-osmaniye */			"Akdeniz Bölgesi'ndedir.","bu","o",
		/* 81-duzce */				"Karadeniz Bölgesi'ndedir.","Merkez ilçesi, kendisiyle aynı ada sahiptir.","Alabalık tesisleri ve mısır pancarı üretimiyle meşhurdur." };
};


// TODO: Burada programınızın gerektirdiği ek üst bilgilere başvurun.
