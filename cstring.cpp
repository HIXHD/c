
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char napis1[20]="Community";
    char napis2[20]="Community";
    cout << "Długosć pierwszego napisu(w znakach): " << strlen(napis1)<< endl;
    cout << "Długosć drugiego napisu: " << strlen(napis1)<< endl;


    cout << "Długosć pierwszego napisu(w bajtach): " << sizeof (napis1)<< endl;
    cout << "Długosć drugiego napisu(w bajtach): " << sizeof (napis2)<< endl;

    cout << "Czy napisy są identyczne?: " << strcmp(napis1, napis2) << endl;

    strcpy (napis1, "Visual Studio");
    cout<<"Napis 1: " << napis1 <<endl;
    strcpy (napis2, "Community");
    cout<<"Napis 2: " << napis2 <<endl;

    strcat(napis1, " ");
    strcat(napis1, napis2);
    cout << "napis1: " << napis1 << endl;

    cout << "Napis \"Studio\"" << "stanowi podłańcuch łańcucha " << napis1
         << "od pozycji " << strstr(napis1,"Studio") << endl;

    cout << "Znak 'm' jest zawarty w łańcuchu "<< napis1 << " od pozycji " << strchr(napis1, 'm') << endl;
    return 0;
}