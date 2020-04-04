#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "funciones.h"
#include "ejercicios.h"
#include "Ej7.h"


int main()
{

int op;
struct articulo art[cant_art]={0};
do{
    op = menu();
    switch(op)
    {
            case 1:
            {
                ejercicio1(art);
            } break;
            case 2:
            {
                ejercicio2(art);
            } break;
            case 3:
            {
                ejercicio3(art);
            } break;
            case 4:
            {
                ejercicio4(art);
            } break;
            case 5:
            {
                ejercicio5(art);
            } break;
            case 6:
            {
                ejercicio6(art);
            } break;
            case 7:
            {
                ejercicio7();
            } break;
            case 8:
            {

            } break;
            case 9:
            {

            } break;
            case 10:
            {

            } break;
            case 11:
                break;
            default:
            {
                cout<<"Opcion incorrecta, intente nuevamente o ingrese 11-Salir.. "<<endl;
            }
            break;
    };
    anykey();

}while(op!=11);

return 0;
}
