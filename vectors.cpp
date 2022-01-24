#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    vector <int> w; // dodanie vectora z wartosciami int do nazwy w
    cout << "Podaj ile elementow ma byc w tablicy " << endl;
    int elementy =0;	//stworzenie int elementy z podstawowa wartoscia 0
    cin >> elementy; //podawanie ile elementow bedzie w tablicy
    int a; // stworzenie int a w którym tworzymy petle odpowiedzialna za petle dodajaca elementy do tablicy
    for (int i =0; i < elementy; i++) { //pętla odpowiedzialna za dodawanie wartosci do tablicy
        cout << "Podaj element " << i << endl;
        cin >> a;
        w.push_back(a); // przeslanie do vectora :w a czyli pierwszej wartosci tablicy
    }

    for (int i =0; i < elementy; i++) {
        cout << "Element: " << i << ": " << w[i] << endl; // wypisanie elementów z tablicy
    }
    double suma {0};
    for ( int elementy : w)
    {
        suma += elementy;
    }
    cout << "suma elementow tablicy wynosi " << suma << endl;


    return 0;
}




#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    vector <int> w; // dodanie vectora z wartosciami int do nazwy w
    cout << "Podaj ile elementow ma byc w tablicy " << endl;
    int elementy =0;	//stworzenie int elementy z podstawowa wartoscia 0
    cin >> elementy; //podawanie ile elementow bedzie w tablicy
    int a; // stworzenie int a w którym tworzymy petle odpowiedzialna za petle dodajaca elementy do tablicy
    for (int i =0; i < elementy; i++) { //pętla odpowiedzialna za dodawanie wartosci do tablicy
        cout << "Podaj element " << i << endl;
        cin >> a;
        w.push_back(a); // przeslanie do vectora :w a czyli pierwszej wartosci tablicy
    }

    for (int i =0; i < elementy; i++) {
        cout << "Element: " << i << ": " << w[i] << endl; // wypisanie elementów z tablicy
    }
    for (int i =0; i < elementy; i++) { //pętla odpowiedzialna za dodawanie wartosci do tablicy
        cout << "Podaj nowy element " << i << endl;
        cin >> a;
        w.insert(w.begin(), 0); // przeslanie do vectora :w a czyli pierwszej wartosci tablicy
    }
    for (int i =0; i < elementy; i++) {
        cout << "Element: " << i << ": " << w[i] << endl; // wypisanie elementów z tablicy
    }

    double suma {0};
    for ( int elementy : w)
    {
        suma += elementy;
    }
    cout << "suma elementow tablicy wynosi " << suma << endl;


    return 0;
}