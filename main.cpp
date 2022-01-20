#include <iostream>
#include <cmath>
using namespace std;

void tblicafirst(double *wsk, int n)
{
    for(int i=0; i < n; i++){  //pętla odpowiedzialna za dodawanie wartości do tablic
        cout <<"podaj wartosc " << i << endl; // rozpoczyna sie od 1 komórki *1==0* 0 1 2 3, a następnie drugiej tablicy
        cin >> *(wsk +i); //wskaźnik zapamietuje dane dotyczace tablicy np pierwsza tablica 0 = 10 ,druga 1 = 3
    }
}

int max(double *wsk, int n) {               //F dla 4 klasy
    int m = *(wsk);
    for (int i=0 ; i<n;i++){  // pętla obliczająca najwieksze elementy z 2 tablic dynamicznych
        if (*(wsk + i) > m) {
            m= *(wsk +i);
        }
    }
    return m;
}

int min(double *wsk, int n) {               //F dla 4 klasy
    int r = *(wsk);
    for (int i=0 ; i<n;i++){  // pętla obliczająca najwieksze elementy z 2 tablic dynamicznych
        if (*(wsk + i) < r) {
            r= *(wsk +i);

        }
    }
    return r;

}
int main() //Outdate : jaki masz do cholery problem
{
    int n1;										//rozmiary tablicy
    cout << "podaj liczbe elementow tablicy"<< endl;
    cout << "n1 = ";
    cin >> n1;
    double *wsk;
    wsk = new double[n1];
    tblicafirst(wsk, n1);
    cout << "najwiekszy element " << max (wsk, n1) <<endl;
    cout << "najmniejszy element " << min (wsk, n1)<< endl;
    cout << "suma najwiekszej i najmniejszej liczb: " << max (wsk, n1 ) + min (wsk, n1) << endl;//sumuje dwa najwieksze elementy z tablic, oblicza je i wypisuje
    delete[] wsk;


    return 0;
}
