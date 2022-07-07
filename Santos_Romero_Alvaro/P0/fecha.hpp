#ifndef FECHA_HPP_
#define FECHA_HPP_

#include <iostream>
#include <cstring>

class Fecha
{

    public:
        explicit Fecha(int d = 0, int m = 0, int a = 0); //4 Constructores (0,1,2,3 parametros) Explicit (Fecha d = 1 MAL)
        Fecha (const char *cadena); //Definicion del constructor de copia
        int dia() const;
        int mes() const;    //Observadores atributos
        int anno() const;

    private:
        int dia_,mes_,anno_;


};

#endif //FECHA_HPP_