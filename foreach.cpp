#include <iostream>

using namespace std;

int main()
{
    int tablica[]={1,2,3};
    int suma=0;
    for(int item : tablica)
        cout<<" "<<item;
    cout<<endl;
    for(int item : tablica)
        suma+=item;
    cout<<" "<<suma<<endl;
    for(int item : tablica)//ta petla działa tylko na zmiennych lokalnych.
        item = 0;          //Po opuszczeniu pętli zmiany w niej dokonane nie są widoczne i nie zawiera 0.
    for(int &item : tablica)//Tak jak zwykle uzyskujemy globalność zmiennej item.
        item = 0;           //Po opuszczeniu pętli zmiany w niej dokonane  są widoczne i  zawiera 0.
    for(int item : tablica)
        cout<<" "<<item;
    return 0;
}
//clothes.forEach(item => document.write(item+'<BR>'))