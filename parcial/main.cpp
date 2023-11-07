#include <iostream>
#include "tablero.h"
#include "controlador.h"

using namespace std;

int main()
{
    int i = true;
    char signo = '-';
    tablero perchis;
    controlador control;
    for(int i = 0; i < 8 ; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            perchis.asignar(j,i,'O');
        }
    }
    perchis.asignar(3,3,'*');
    perchis.asignar(4,4,'*');
    perchis.asignar(3,4,'-');
    perchis.asignar(4,3,'-');


    while(i == true)
    {
        signo = control.turno();
        perchis.verificarpos(signo);
    }




    return 0;
}
