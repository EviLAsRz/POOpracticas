#include <iostream>
#include "fecha.hpp"

using namespace std;
int main()
{
    Fecha a;
    Fecha d(a);
    cout<<"Dia:"<<d.dia()<<endl;
    cout<<"Mes:"<<d.mes()<<endl;
    cout<<"Año:"<<d.anno()<<endl;
}