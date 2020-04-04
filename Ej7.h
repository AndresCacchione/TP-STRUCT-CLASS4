#ifndef EJ7_H_INCLUDED
#define EJ7_H_INCLUDED
#include "funciones_ej7.h"

void ejercicio7()
{
    char op;
    articulo7 art[cant_art7]={0};
    struct vector_pto_a venta_acumulada[cant_cli]={0};

    carga_registros(art);
    ordena_nro_art(art);
    lote_proceso(art, venta_acumulada);

    do
    {
        op = menu7();

        switch(op)
        {
        case 'A':
            {

                cout<<"Cliente\t Ene \t Feb \t Mar \t Abr \t May \t Jun \t Jul \t Ago \t Set \t Oct \t Nov \t Dic"<<endl;
                for(int i=0;i<cant_cli;i++)
                {
                    if(mostrar(venta_acumulada,i)>=8)
                    {
                    cout<< i+1<< "    ";
                    for(int j=0;j<12;j++)
                    {
                        cout<<"    "<< venta_acumulada[i].compra_por_mes[j]<<"    ";
                    }
                    cout<<endl;
                    }
                }
            }break;
        case 'B':
            {
                cout<<"Articulos con stock cero: "<< endl<<endl;
                for(int i=0;i<cant_art7;i++)
                {
                    if(art[i].stock <= 0)
                    {
                    cout<<"Articulo numero "<< art[i].nro_art<<endl;
                    }
                }
            }break;
        case 'S':
            {

            }break;
        default:
            {
                char var=70;
                cout<<var<<"orro!!"<<endl;
                cout<<"Opcion mal ingresada, intente nuevamente.."<<endl;
            }break;
        }
        anykey();
    }while(op!='S');
}
















#endif // EJ7_H_INCLUDED
