#include "tablero.h"
#include <cctype>



tablero::tablero()
{

}

tablero::asignar(int x1, int y1, char signo){
    x = x1;
    y = y1;
    sgn = signo;
    espacio[x][y] = sgn;
}

tablero::mostrar(){
    for(int i = 0; i < 9; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for(int i = 0; i < 8 ; i++){
        cout << posy[i] << " ";
        for(int j = 0; j < 8; j++){
            cout <<  espacio[i][j] << " ";
        }
    cout << endl;
    }
}

tablero::verificarpos(char signo){
    int j;
    int i = 0;
    int cloni = 0, clonj;
    sgn = signo;
    cout << "Ingrese posicion para jugar" << endl;
    cin >> pos;
    pos[0] = toupper(pos[0]);
    while(pos[0] != posy[i]){
        i = i +1;
        if(i > 8){
            cout << "Numero no valido, ingrese valor" << endl;
            cin >> pos;
        }
    }
    j =pos[1] - '0';
    j = j - 1;

    if(espacio[i][j] == 'O' ){
        asignar(i,j,sgn);
        mostrar();
    }


        else
        {
            cout << "Linea ocupada, escoja otra" << endl;
            mostrar();
            verificarpos(sgn);
        }

}
