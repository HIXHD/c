/*
#include <iostream>
int main()
{
    char b =' ';
    double c = 4.5;
    int a = int (b);
    int d = int (c);
    std::cout<< a <<std::endl;
    std::cout<< d;
    return 0;
}
*/
#include <iostream>
namespace stale
{
    const double pi=3.14;
}
int main()
{
    double r;
    std::cout <<"podaj promien okregu \n";
    std::cin >> r;
    std::cout<<"pole okregu "<< stale::pi*r*r;
    return 0;
}