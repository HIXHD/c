/*
 #include <iostream>
using namespace std;
int main()
{
    int a = 5;
    double b = 4.6;
    decltype (a) c;
    c=' ';
    cout << c;
    return 0;
    */
}
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    auto b = 1;
    decltype (a+b)  c;
    c=a+b;
    auto g='d';
    cout << g;
    return 0;
}