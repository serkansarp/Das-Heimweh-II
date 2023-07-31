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
		/* 02-adiyaman */			"su","bu","o",
		/* 03-afyonkarahisar */		"su","bu","o",
		/* 04-agri */				"su","bu","o",
		/* 05-amasya */				"su","bu","o",
		/* 06-ankara */				"İç Anadolu Bölgesi'ndedir.","Anıtkabir bu ilde bulunur.","Türkiye'nin başkentidir.",
		/* 07-antalya */			"su","bu","o",
		/* 08-artvin */				"su","bu","o",
		/* 09-aydin */				"su","bu","o",
		/* 10-balikesir */			"su","bu","o",
		/* 11-bilecik */			"su","bu","o",
		/* 12-bingol */				"su","bu","o",
		/* 13-bitlis */				"su","bu","o",
		/* 14-bolu */				"su","bu","o",
		/* 15-burdur */				"su","bu","o",
		/* 16-bursa */				"su","bu","o",
		/* 17-canakkale */			"su","bu","o",
		/* 18-cankiri */			"su","bu","o",
		/* 19-corum */				"su","bu","o",
		/* 20-denizli */			"su","bu","o",
		/* 21-diyarbakir */			"su","bu","o",
		/* 22-edirne */				"su","bu","o",
		/* 23-elazig */				"su","bu","o",
		/* 24-erzincan */			"su","bu","o",
		/* 25-erzurum */			"su","bu","o",
		/* 26-eskisehir */			"su","bu","o",
		/* 27-gaziantep */			"su","bu","o",
		/* 28-giresun */			"su","bu","o",
		/* 29-gumushane */			"su","bu","o",
		/* 30-hakkari */			"su","bu","o",
		/* 31-hatay */				"su","bu","o",
		/* 32-isparta */			"su","bu","o",
		/* 33-icel */				"su","bu","o",
		/* 34-istanbul */			"su","bu","o",
		/* 35-izmir */				"su","bu","o",
		/* 36-kars */				"su","bu","o",
		/* 37-kastamonu */			"su","bu","o",
		/* 38-kayseri */			"su","bu","o",
		/* 39-kirklareli */			"su","bu","o",
		/* 40-kirsehir */			"su","bu","o",
		/* 41-kocaeli */			"su","bu","o",
		/* 42-konya */				"su","bu","o",
		/* 43-kutahya */			"su","bu","o",
		/* 44-malatya */			"su","bu","o",
		/* 45-manisa */				"su","bu","o",
		/* 46-kahramanmaras */		"su","bu","o",
		/* 47-mardin */				"su","bu","o",
		/* 48-mugla */				"su","bu","o",
		/* 49-mus */				"su","bu","o",
		/* 50-nevsehir */			"İç Anadolu Bölgesi'ndedir.","Testi Kebabı ile ünlüdür.","Peribacaları buradadır.",
		/* 51-nigde */				"su","bu","o",
		/* 52-ordu */				"su","bu","o",
		/* 53-rize */				"su","bu","o",
		/* 54-sakarya */			"su","bu","o",
		/* 55-samsun */				"su","bu","o",
		/* 56-siirt */				"su","bu","o",
		/* 57-sinop */				"su","bu","o",
		/* 58-sivas */				"su","bu","o",
		/* 59-tekirdag */			"su","bu","o",
		/* 60-tokat */				"su","bu","o",
		/* 61-trabzon */			"su","bu","o",
		/* 62-tunceli */			"su","bu","o",
		/* 63-sanliurfa */			"su","bu","o",
		/* 64-usak */				"su","bu","o",
		/* 65-van */				"su","bu","o",
		/* 66-yozgat */				"su","bu","o",
		/* 67-zonguldak */			"su","bu","o",
		/* 68-aksaray */			"su","bu","o",
		/* 69-bayburt */			"su","bu","o",
		/* 70-karaman */			"su","bu","o",
		/* 71-kirikkale */			"su","bu","o",
		/* 72-batman */				"su","bu","o",
		/* 73-sirnak */				"su","bu","o",
		/* 74-bartin */				"su","bu","o",
		/* 75-ardahan */			"su","bu","o",
		/* 76-igdir */				"su","bu","o",
		/* 77-yalova */				"su","bu","o",
		/* 78-karabuk */			"su","bu","o",
		/* 79-kilis */				"su","bu","o",
		/* 80-osmaniye */			"su","bu","o",
		/* 81-duzce */				"Karadeniz Bölgesi'ndedir.","Merkez ilçesi, kendisiyle aynı ada sahiptir.","Alabalık tesisleri ve mısır pancarı üretimiyle meşhurdur." };
};


// TODO: Burada programınızın gerektirdiği ek üst bilgilere başvurun.
