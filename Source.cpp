#include <iostream>
#include "Header.h"

using namespace std;


Hrebetni::Hrebetni() {}

Hrebetni::~Hrebetni() {}

Ptahy::Ptahy() {}

Ptahy::~Ptahy() {}

Tvaryny::Tvaryny() {}

Tvaryny::~Tvaryny() {}

Liudy::Liudy() {}

Liudy::~Liudy() {}

void Liudy::opis() {
	setlocale(LC_ALL, "ukr");
	cout << "÷е людина." << endl;
}

Sobaky::Sobaky() {}

Sobaky::~Sobaky() {}

void Sobaky::opis() {
	setlocale(LC_ALL, "ukr");
	cout << "÷е собака." << endl;
}

Koty::Koty() {}

Koty::~Koty() {}

void Koty::opis() {
	setlocale(LC_ALL, "ukr");
	cout << "÷е кiт." << endl;
}

Vorony::Vorony() {}

Vorony::~Vorony() {}

void Vorony::opis() {
	setlocale(LC_ALL, "ukr");
	cout << "÷е ворона." << endl;
}
