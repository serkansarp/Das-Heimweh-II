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
		/* 06-ankara */				"İç Anadolu Bölgesi'ndedir.","Kedisi, keçisi ve tavşanı ünlüdür.","Anıtkabir bu ilde bulunur.",
		/* 07-antalya */			"Akdeniz Bölgesi'ndedir.","Damlataş Mağarası burada bulunur.","En bilinen ilçesi Alanya'dır.",
		/* 08-artvin */				"Karadeniz Bölgesi'ndedir.","Hopa, bilinen ilçelerindendir.","Balı dünyaca ünlüdür.",
		/* 09-aydin */				"Ege Bölgesi'ndedir.","İncir yetiştiriciliği ile tanınır.","Efeleri meşhurdur.",
		/* 10-balikesir */			"Marmara Bölgesi'ndedir.","Höşmerim burada yenir.","Susurluk Ayranı en bilinen içeceğidir.",
		/* 11-bilecik */			"Marmara Bölgesi'ndedir.","Kayı Boyu ve Osmanlı denildiğinde akla gelen ilk illerdendir.","Bıldırcın Kebabı, meşhur yiyeceklerindendir.",
		/* 12-bingol */				"Doğu Anadolu Bölgesi'ndedir.","Hazarşah Köyü'ndeki tamamen doğal bir oluşum olan Yüzen Adalar, şehre ün katmıştır.","Ayran Çorbası ile meşhurdur.",
		/* 13-bitlis */				"Doğu Anadolu Bölgesi'ndedir.","Büryan Kebabı ile meşhurdur.","Beş Minare bu ildedir.",
		/* 14-bolu */				"Karadeniz Bölgesi'ndedir.","Kozalak reçeli ve Çam balı burada bulunur.","Abant Gölü buradadır.",
		/* 15-burdur */				"Akdeniz Bölgesi'ndedir.","Mermer sanayisinin markalaşma alanıdır.","Gidildiğinde Gazel Böreği yenilmeden dönülmez.",
		/* 16-bursa */				"Marmara Bölgesi'ndedir.","İskender Kebabı ile ünlüdür.","Uludağ, bu ilin sınırları içerisindedir.",
		/* 17-canakkale */			"Marmara Bölgesi'ndedir.","Truva Antik Kenti burada bulunur.","18 Mart 1915'te ülkemize, adıyla anılan bir zafer hediye etmiştir.",
		/* 18-cankiri */			"İç Anadolu Bölgesi'ndedir.","Sarımsaklı et yemeği tescillidir.","Kaya tuzu, Türkiye tuz üretiminin önemli bir bölümünü karşılar.",
		/* 19-corum */				"Karadeniz Bölgesi'ndedir.","Dünyanın merkezi olduğuna dair bir şehir efsanesi vardır.","Leblebi denince ilk akla gelen ildir.",
		/* 20-denizli */			"Ege Bölgesi'ndedir.","Pamukkale travertenleri buradadır.","Horozu ile birlikte anılır.",
		/* 21-diyarbakir */			"Güneydoğu Anadolu Bölgesi'ndedir.","Malabadi Köprüsü ilin ünlü tarihi yerlerindendir.","Karpuzu dünya çapında ünlüdür.",
		/* 22-edirne */				"Marmara Bölgesi'ndedir.","Meşhur yiyecekleri arasında tava ciğeri de bulunur.","Kırkpınar Yağlı Güreşleri turnuvası burada düzenlenir.",
		/* 23-elazig */				"Doğu Anadolu Bölgesi'ndedir.","Dünyada şarap üretiminin merkezlerindendir.","Cevizli sucuk, burada Orcik ismiyle anılır ve ünlüdür.",
		/* 24-erzincan */			"Doğu Anadolu Bölgesi'ndedir.","Yaprak döneri ile ünlüdür.","Tulum peyniri denince ilk akla gelen ildir.",
		/* 25-erzurum */			"Doğu Anadolu Bölgesi'ndedir.","Palandöken Dağı bu ildedir.","Cağ Kebabı buradan çıkmadır.",
		/* 26-eskisehir */			"İç Anadolu Bölgesi'ndedir.","Gidildiğinde ilk ziyaret edilmesi gereken yerler'den biri Odunpazarı'dır.","Lüle Taşı ve Çibörek ile tanınır.",
		/* 27-gaziantep */			"Güneydoğu Anadolu Bölgesi'ndedir.","Baklavası ile meşhurdur.","1921'de adının başına Gazi unvanını almıştır.",
		/* 28-giresun */			"Karadeniz Bölgesi'ndedir.","Karalahana ve Pancar çorbaları meşhurdur.","Kümbet ve Kulakkaya yaylaları ile Kuzalan Şelalesi mutlaka görülmelidir.",
		/* 29-gumushane */			"Karadeniz Bölgesi'ndedir.","Katıklı Çorbası'nın ayrı bir tadı vardır.","Zigana ve Kop geçitleri bu ilde yer alır.",
		/* 30-hakkari */			"Doğu Anadolu Bölgesi'ndedir.","Yüksekova Kebabı bu ilçesinin simgesi haline gelmiştir.","Yavuzlar Köyü, bu ilin Kapadokyası olarak bilinir.",
		/* 31-hatay */				"Akdeniz Bölgesi'ndedir.","Humus ve künefesiyle tanınır.","Merkez ilçesi Antakya'nın adı yanlışıkla ilin adı olarak da kullanılır.",
		/* 32-isparta */			"Akdeniz Bölgesi'ndedir.","Kirazı, bölge ihracatının göz bebeğidir.","En bilinen simgesi güldür.",
		/* 33-icel */				"Akdeniz Bölgesi'ndedir.","Cezerye Tatlısı ile bilinir.","Merkez ilçesi Mersin'in adı yanlışlıkla ilin adı olarak da kullanılır.",
		/* 34-istanbul */			"Marmara Bölgesi'ndedir.","Sultan Ahmet Camii buradadır.","İki ayrı yakadan oluşur.",
		/* 35-izmir */				"Ege Bölgesi'ndedir.","Boyoz ve Kumru yiyecekleri ünlüdür.","Kızları güzeldir diye bilinir.",
		/* 36-kars */				"Doğu Anadolu Bölgesi'ndedir.","En ünlü tarihi eseri Ani Harabeleri'dir.","Kaşar peyniri en ön planda olan süt ürünüdür.",
		/* 37-kastamonu */			"Karadeniz Bölgesi'ndedir.","Tosya, üzümü ve pirinci ile ön planda olan ilçelerindendir.","İlin adıyla anılan tarihi evler iyi bilinir.",
		/* 38-kayseri */			"İç Anadolu Bölgesi'ndedir.","Erciyes Dağı buradadır.","Sucuğu ve pastırması ile Türkiye'nin şarküteri merkezidir.",
		/* 39-kirklareli */			"Marmara Bölgesi'ndedir.","En meşhur yöresel lezzetlerinden biri, ısırgan otundan yapılan Kurpiva'dır.","Istıranca (Yıldız) Dağları buradadır.",
		/* 40-kirsehir */			"İç Anadolu Bölgesi'ndedir.","En bilinen yemeği Düğün Çorbası'dır.","1954'te Nevşehir'in ilçesi yapılıp 1957'de tekrar il olmuştur.",
		/* 41-kocaeli */			"Marmara Bölgesi'ndedir.","Sapanca Gölü ile ünlü bir ilimizdir.","Merkez ilçesi İzmit'in adı yanlışlıkla ilin adı olarak da kullanılır.",
		/* 42-konya */				"İç Anadolu Bölgesi'ndedir.","Etli Ekmek denince akla gelen ildir.","Mevlana Müzesi buradadır.",
		/* 43-kutahya */			"Ege Bölgesi'ndedir.","Sini Mantısı ve Cimcik, meşhur yemeklerinden bazılarıdır.","Çinileri dünyaca ünlüdür.",
		/* 44-malatya */			"Doğu Anadolu Bölgesi'ndedir.","Pekmez ve kuru yemiş sektöründe ön plandadır.","Kayısı denince ilk akla gelen şehirdir.",
		/* 45-manisa */				"Ege Bölgesi'ndedir.","Kırkağaç Kavunu ile ünlüdür.","Mesir Macunu burada yapılır.",
		/* 46-kahramanmaras */		"Akdeniz Bölgesi'ndedir.","Dondurması çok ünlüdür.","1925'te adının başına Kahraman unvanı almıştır.",
		/* 47-mardin */				"Güneydoğu Anadolu Bölgesi'ndedir.","Kibe isimli işkembe dolması, tescilli ürünüdür.","Telkari sanatı ile ünlüdür.",
		/* 48-mugla */				"Ege Bölgesi'ndedir.","Şambali Tatlısı en çok tüketilen tatlılarındandır.","En bilinen ilçesi Bodrum'dur.",
		/* 49-mus */				"Doğu Anadolu Bölgesi'ndedir.","Hafta Direği isimli ünlü bir köfte türü, sevilen yiyeceklerindendir.","Malazgirt Zaferi burada kazanılmıştır.",
		/* 50-nevsehir */			"İç Anadolu Bölgesi'ndedir.","Testi Kebabı ile ünlüdür.","Peribacaları buradadır.",
		/* 51-nigde */				"İç Anadolu Bölgesi'ndedir.","Patates üretimi ile ülkede birinci sıradadır.","Bor'un pazarı geçince eşek sürülen ildir.",
		/* 52-ordu */				"Karadeniz Bölgesi'ndedir.","Ünye Kalesi burada bulunmaktadır.","Fındık üretiminde başı çekmektedir.",
		/* 53-rize */				"Karadeniz Bölgesi'ndedir.","Ayder Yaylası ile tanınır.","Çay denince ilk akla gelen ildir.",
		/* 54-sakarya */			"Marmara Bölgesi'ndedir.","1921'de yapılan Meydan Muharebesi ile Yunan taarruzu durdurulmuştur.","Merkez ilçesi Adapazarı'nın adı yanlışlıkla ilin adı olarak da kullanılır.",
		/* 55-samsun */				"Karadeniz Bölgesi'ndedir.","Türkiye'nin en büyük limanı, ilin adıyla anılır.","Karadeniz'in burma baklavası, burada Kocakarı Gerdanı adıyla anılır.",
		/* 56-siirt */				"Güneydoğu Anadolu Bölgesi'ndedir.","Pervari Balı burada üretilir.","İskemet Köfte isimli bir yiyeceği çok sevilir.",
		/* 57-sinop */				"Karadeniz Bölgesi'ndedir.","Kestane Balı ile ünlüdür.","Müzeye çevrilmiş tarihi cezaevi ile ünlüdür.",
		/* 58-sivas */				"İç Anadolu Bölgesi'ndedir.","Madımak yemeği ünlüdür.","Kangal Köpeği ilk akla gelen hayvandır.",
		/* 59-tekirdag */			"Marmara Bölgesi'ndedir.","Kendisine bağlı olan en büyük ve ünlü ilçe, Çorlu'dur.","Köftesi meşhurdur.",
		/* 60-tokat */				"Karadeniz Bölgesi'ndedir.","Niksar ve Erbaa bilinen ilçelerindendir.","Zile Pekmezi en bilinen lezzetlerindendir.",
		/* 61-trabzon */			"Karadeniz Bölgesi'ndedir.","Burma bilezikleri ilin adıyla anılır.","Hamsi balığı meşhurdur.",
		/* 62-tunceli */			"Doğu Anadolu Bölgesi'ndedir.","Çemişgezek, en bilinen ilçelerindendir.","Dağ kokulu Şavak Peyniri, yurdun her tarafından alıcı bulmaktadır.",
		/* 63-sanliurfa */			"Güneydoğu Anadolu Bölgesi'ndedir.","Balıklıgöl ve Göbekli Tepe'siyle ünlüdür.","1984'te adının başına Şanlı unvanı almıştır.",
		/* 64-usak */				"Ege Bölgesi'ndedir.","Atatürk ve Arkeoloji Müzesi burada yer alır.","Benekli elma görünümündeki kavun-armut karışımı aromalı Naşi meyvesi ünlüdür.",
		/* 65-van */				"Doğu Anadolu Bölgesi'ndedir.","Mavi-yeşil renkteki gözleriyle ünlü kedisi vardır.","Türkiye'nin en büyük gölünün bulunduğu ildir.",
		/* 66-yozgat */				"İç Anadolu Bölgesi'ndedir.","İncir Uyutması, yöresel lezzetlerindendir.","Arabaşı çorbası ilin sevilen yiyeceklerindendir.",
		/* 67-zonguldak */			"Karadeniz Bölgesi'ndedir.","Filyos Antik Kenti buradadır.","Ülkenin en zengin taş kömürü madenlerini barındırır.",
		/* 68-aksaray */			"İç Anadolu Bölgesi'ndedir.","Daha önce Niğde'ye bağlıyken 1989'da vilayet olmuştur.","Köpük Helvası, Sele Sepeti ve Güzelyurt Çinisi, meşhur ürünlerindendir.",
		/* 69-bayburt */			"Karadeniz Bölgesi'ndedir.","Türkiye'nin en küçük illerindendir.","Önceden Gümüşhane'ye bağlıyken 1989'da il statüsüne geçirilmiştir.",
		/* 70-karaman */			"İç Anadolu Bölgesi'ndedir.","Yerköprü Şelalesi ilin doğal güzelliklerindendir.","Sonradan oyunu çıkan koyunu bulunmaktadır.",
		/* 71-kirikkale */			"İç Anadolu Bölgesi'ndedir.","Önceleri Ankara'ya bağlı bir ilçeyken 1989'da il olmuştur.","Delice Beyazı isimli üzümü, tescillidir.",
		/* 72-batman */				"Güneydoğu Anadolu Bölgesi'ndedir.","Raman Dağı'ndan petrol çıkarılmaya başlanmasıyla büyük bir ekonomik değişim geçirmiştir.","Aynı isimli süper kahraman bulunmaktadır.",
		/* 73-sirnak */				"Doğu Anadolu Bölgesi'ndedir.","1990'da Siirt'ten ayrılarak il olmuştur.","Silopi, Cizre ve Beytüşşebap, bilinen ilçelerindendir.",
		/* 74-bartin */				"Karadeniz Bölgesi'ndedir.","Önceleri Zonguldak'ın ilçesiyken 1991'de il statüsüne kavuşmuştur.","Pum Pum Çorbası, Şapşap Köfte, Yumurtalı İsbut gibi yiyecekleri ile tanınır.",
		/* 75-ardahan */			"Doğu Anadolu Bölgesi'ndedir.","Nüfusun büyük çoğunluğunu Kıpçak kökenli Ahıska Türkleri oluşturur","Balı ve kaşar peyniri, ülke çapında ün yapmıştır.",
		/* 76-igdir */				"Doğu Anadolu Bölgesi'ndedir.","Kendine has bir tadı ve aroması olan kayısısı bilinir.","Meteor Çukuru ve Gökkuşağı Tepeleri görülmesi gereken yerlerindendir.",
		/* 77-yalova */				"Marmara Bölgesi'ndedir.","1995'te İstanbul'dan ayrılarak il yapılmıştır.","Yüzölçümü itibarıyla Türkiye'nin en küçük ilidir.",
		/* 78-karabuk */			"Karadeniz Bölgesi'ndedir.","1995'te Çankırı'dan 2, Zonguldak'tan da 3 ilçe birleştirilerek oluşturulmuştur.","Perohi, Göbü, Çingene Baklavası ve Haluşka ile meşhurdur.",
		/* 79-kilis */				"Güneydoğu Anadolu Bölgesi'ndedir.","Silkme Yemeği ilde çok iyi bilinir.","Ekşili Malhıta, Lebeniye, Oruk, Kümbülmüşviyye, bilinen lezzetlerindendir.",
		/* 80-osmaniye */			"Akdeniz Bölgesi'ndedir.","Öncesinde il statüsündeyken 1933'te Adana'nın ilçesine dönüştürülüp 1996'da tekrar il olmuştur.","Gaziantep, Adana ve Hatay ile komşudur.",
		/* 81-duzce */				"Karadeniz Bölgesi'ndedir.","Merkez ilçesi, kendisiyle aynı ada sahiptir.","Alabalık tesisleri ve mısır pancarı üretimiyle meşhurdur." };
};


// TODO: Burada programınızın gerektirdiği ek üst bilgilere başvurun.
