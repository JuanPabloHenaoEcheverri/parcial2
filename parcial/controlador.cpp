#include "controlador.h"

controlador::controlador()
{

}

char controlador::turno(){
    if(turnos != 0)
    {
        turnos = 0;
        return '*';
    }
    else
    {
        turnos = 1;
        return '-';
    }
}
