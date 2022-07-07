#include <iostream>
#include "fecha.hpp"
#include <stdexcept>
#include <ctime>

Fecha::Fecha(int d, int m, int a): dia_(d), mes_(m), anno_(a)
{
    time_t now = time(NULL);
    struct tm nowLocal = *localtime(&now); //obtener la fecha del sistema

    //Hay que tener en cuenta que si el dia,mes o anno son 0, se deberá de proporcionar la fecha del sistema.

    if (dia_ == 0)  
    {
        dia_ = nowLocal.tm_mday; //devuelve el dia actual
    }

    if (mes_ == 0)
    {
        mes_ = nowLocal.tm_mon + 1; //devuelve el mes actual a a partir de enero (0-11, por eso se suma 1)
    }

    if (anno_ == 0)
    {
        anno_ = nowLocal.tm_year + 1900; //devuelve el anno actual a partir del 1900 (sumamos 1900 para obtener el anno real)
    }
}

int Fecha::dia() const
{
    return dia_;
}

int Fecha::mes() const
{
    return mes_;
}

int Fecha::anno() const
{
    return anno_;
}