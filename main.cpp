#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, r;//rozmiar tablicy
    cout << "podaj liczbe elementow 1 tablicy"<< endl;
    cout << "n = ";
    cin >> n;
    double *wsk;
    wsk = new double[n];
    cout << "podaj wartosc " << n << "elementow tablicy: "<< endl;
    for(int i = 0; i < n; i++) {
        cout << "tablica[" << i << "] = "; // odpowiada za wstawianie do tablicy elementów
        cin >> *(wsk + i);// cin >> wks[i]; to to samo
    }
    for(int i =1 ;i<n; i++)
    {

    }
    cout << "podaj liczbe elementow 2 tablicy"<< endl;
    cout << "r = ";
    cin >> r;
    double *rnk;
    rnk = new double[r];
    cout << "podaj wartosc " << r << "elementow tablicy: "<< endl;
    for(int i = 0; i < r; i++){
        cout << "tablica[" << i << "] = "; // odpowiada za wstawianie do tablicy elementów
        cin >> *(rnk + i);// cin >> wks[i]; to to samo
    }
    /*
    double suma {0};
    for(int i = 0; i < n; i++){
        suma += *(wsk + i);//to samo co: suma += wsk[i]
    }
    cout << (wsk+1) << endl;// wypisuje adres 2 tablicy
    delete[] wsk;
    cout << "Suma elementow wynosi: " << suma << endl;*/
    return 0;
}