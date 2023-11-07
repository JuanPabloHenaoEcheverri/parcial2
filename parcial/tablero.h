#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
using namespace std;
class tablero
{
private:
    int x;
    int y;
    char espacio[8][8] = {'o'};
    char sgn;
    char posy[8] = {'A','B','C','D','E','F','G','H'};
    char pos[2] = {0};
public:
    tablero();
    asignar(int x1, int y1, char signo);
    mostrar();
    verificarpos(char signo);


};

#endif // TABLERO_H
