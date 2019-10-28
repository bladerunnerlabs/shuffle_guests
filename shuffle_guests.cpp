#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> participants
	{
		"Alex Belous -- member 256386791",
		"Alexander Kushnir -- member 221146395",
		"Alexey -- member 253623255",
		"Alon moshe -- member 295245856",
		"Arie Gurkov -- member 117557672",
		"Arik I. -- member 244617910",
		"Artur Akerberg -- member 278208723",
		"Aviv -- member 237379580",
		"Basil Salman -- member 256616837",
		"Bishara AbuHattoum -- member 295085524",
		"Cfir Aguston -- member 186379481",
		"chen dalawey -- member 59699302",
		"Daniel Bricker -- member 252918632",
		"David Baruch Klein -- member 256618607",
		"Denis K -- member 258244705",
		"Dima Sirotnikov -- member 74369222",
		"Dimitry Kloper -- member 162702992",
		"dorodnic -- member 150431172",
		"Efraim Flashner -- member 152757472",
		"Elazar Raab -- member 239658211",
		"Eli -- member 192592305",
		"Eliah Ninyo -- member 195831104",
		"Eva Lomazov -- member 207515252",
		"Evgeny Abramovich -- member 295306908",
		"Gal Cohen -- member 294948725",
		"George Gerbov -- member 295247118",
		"Guy Rodoy -- member 294161511",
		"Idan Cohen -- member 277065184",
		"Idan Yaniv -- member 248216392",
		"ido -- member 175554732",
		"Jean Jacques Polakow -- member 270684589",
		"Jony Papini -- member 186442170",
		"Joseph -- member 9462790",
		"Kiril Dobrovolski -- member 194725093",
		"Liel Gemesh -- member 256749087",
		"Lior T -- member 214673059",
		"Marina Vainer -- member 257128514",
		"micha bar-shalev -- member 79499532",
		"Michael Refaelovich -- member 293871156",
		"Michael Riabzev -- member 293847035",
		"Mohammad Agbarya -- member 248218359",
		"Nadav Hugim -- member 250234017",
		"ofer S. -- member 185371952",
		"Ofir Peretz -- member 265104085",
		"Oren L -- member 253262882",
		"Ran Frank -- member 185698691",
		"Ran Regev -- member 267049428",
		"Roman Malits -- member 250130262",
		"Ronen -- member 270129787",
		"Shahar Mike -- member 227762008",
		"Shai Attia -- member 250483201",
		"Tamir -- member 246670181",
		"Tomer Haber -- member 257689528",
		"Vadym Khoptynets -- member 211588485",
		"Vladimir Vainer -- member 243280741",
		"Yaron -- member 243601175",
		"Yehuda -- member 244610849",
		"Yonatan M. -- member 243027004",
		"Yuri -- member 203522732",
		"Yuval Gluzman -- member 295061291",
		"Ziv M -- member 223177906",
		"Zvi Avraham -- member 8696190",
		"דביר קהתי -- member 250145682",
		"לורלה מתתיה -- member 295062959",
	};
	shuffle(participants.begin(), participants.end(), mt19937(random_device()()));
	for (int i = 0; i < 20; ++i)
		cout << "#" << i + 1 << ": " << participants[i] << endl;
}