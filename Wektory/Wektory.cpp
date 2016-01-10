#include "stdafx.h"
#include <iostream>
#include <vector>

#define PI 3.1415926535
using namespace std;

int main()
{
	int wymiar1 = 0, wymiar2 = 0;
	float x = 0, wynik = 0;
	std::vector < float > tab1;
	std::vector < float > tab2;
	std::vector < float > tab3;

	cout << "Podaj wymiar wektora 1: ";
	cin >> wymiar1;
	cout << "Podaj wymiar wektora 2: ";
	cin >> wymiar2;

	while (wymiar1 != wymiar2)
	{
		cout << "Wymiary wektorow sa rozne, podaj jeszcze raz ich rozmiar: \n";
		cout << "Podaj wymiar wektora 1: ";
		cin >> wymiar1;
		cout << "Podaj wymiar wektora 2: ";
		cin >> wymiar2;
	}

	cout << "Podaj " << wymiar1 << " liczb dla wektora1: \n";
	for (int i = 0; i < wymiar1; i++)
	{
		cout << i + 1 << " wspolrzedna = ";
		cin >> x;
		tab1.push_back(x);
	}

	cout << "Podaj " << wymiar2 << " liczb dla wektora2: \n";
	for (int i = 0; i < wymiar2; i++)
	{
		cout << i + 1 << " wspolrzedna = ";
		cin >> x;
		tab2.push_back(x);
	}



	cout << "\n\nMNOZENIE\n";
	for (int i = 0; i < wymiar1; i++)
	{
		wynik = tab1[i] * tab2[i];
		tab3.push_back(wynik);
	}

	cout << "Wekto wynikowy: ";
	for (int i = 0; i < tab3.size(); i++)
	{

		cout << tab3[i] << "  ";
	}
	tab3.clear();



	cout << "\n\nDODAWANIE\n";
	for (int i = 0; i < wymiar1; i++)
	{
		wynik = tab1[i] + tab2[i];
		tab3.push_back(wynik);
	}

	cout << "Wektor wynikowy: ";
	for (int i = 0; i < tab3.size(); i++)
	{

		cout << tab3[i] << "  ";
	}
	tab3.clear();



	cout << "\n\nODEJMOWANIE\n";
	for (int i = 0; i < wymiar1; i++)
	{
		wynik = tab1[i] - tab2[i];
		tab3.push_back(wynik);
	}

	cout << "Wekto wynikowy: ";
	for (int i = 0; i < tab3.size(); i++)
	{

		cout << tab3[i] << "  ";
	}
	tab3.clear();


	if (wymiar1 == 2)
	{
		float cosA, wynik;
		float dl_wektora1 = 0;
		float dl_wektora2 = 0;
		float iloczyn_skalarny = 0;

		dl_wektora1 = sqrt(tab1[0] * tab1[0] + tab1[1] * tab1[1]);
		dl_wektora2 = sqrt(tab2[0] * tab2[0] + tab2[1] * tab2[1]);
		iloczyn_skalarny = tab1[0] * tab2[0] + tab1[1] * tab2[1];

		cosA = iloczyn_skalarny / (dl_wektora1 * dl_wektora2);
		wynik = acos(cosA) * 180 / PI;
		cout << "\n\nKat miedzy wektorami to = " << wynik;
	}
	else
	{
		cout << "\n\nNie mozna policzyc kata miedzy wektorami (zly wymiar) ";
	}

	cin.ignore();
	getchar();

	return 0;
}