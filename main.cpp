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
        if (*(wsk + 1) > m) {
            m= *(wsk +1);
        }
    }
    return m;
}



int main() //Outdate : jaki masz do cholery problem
{
    int n1, n2;										//rozmiary tablicy
    cout << "podaj liczbe elementow 1 tablicy"<< endl;
    cout << "n1 = ";
    cin >> n1;
    cout << "podaj liczbe elementow 2 tablicy"<< endl;
    cout << "n2 = ";
    cin >> n2;
    double *wsk1, *wsk2;
    wsk1 = new double[n1];
    wsk2 = new double[n2];
    tblicafirst(wsk1, n1);
    tblicafirst(wsk2, n2);

    cout << "suma najwiekszych liczb: " << max (wsk1, n1 ) + max (wsk2, n2) << endl;//sumuje dwa najwieksze elementy z tablic,, oblicza je i wypisuje
    delete[] wsk1;
    delete[] wsk2;

    return 0;
}
/*for(int i = 0; i < n; i++){
    cout << "tablica[" << i << "] = "; // odpowiada za wstawianie do tablicy elementów
    cin >> *(wsk + i);// cin >> wks[i]; to to samo
}
double suma {0};
for(int i = 0; i < n; i++){
    suma += *(wsk + i);//to samo co: suma += wsk[i]
}
cout << (wsk+1) << endl;// wypisuje adres elementu tablicy
delete[] wsk;
cout << "Suma elementow wynosi: " << suma << endl;
return 0;
}//stary kod nie zuzywac do powyżej zamieszczonego kodu*/