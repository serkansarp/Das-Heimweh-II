// Das Heimweh II.h: Standart sistem ekleme dosyaları için ekleme dosyası,
// veya projeye özgü ekleme dosyaları.

#pragma once


#include <iostream>
#include <string>
#include <clocale>
#include <time.h>
#include <thread>
#include <chrono>


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
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o",
		"su","bu","o" };
};


// TODO: Burada programınızın gerektirdiği ek üst bilgilere başvurun.
