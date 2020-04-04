#ifndef EJERCICIOS_H_INCLUDED
#define EJERCICIOS_H_INCLUDED
#include "funciones_ej7.h"

void ejercicio1(struct articulo *art)
{
    int op;
    cout<<"Desea CARGAR articulos? Inrgrese 1. Desea MOSTRAR articulos? Inrgrese 2: ";
    cin>>op;
    if(op==1)
    {
        cargar_articulos(art);
    }
    else
    {
        mostrar_articulos(art);
    }
}

void ejercicio2(struct articulo *art)
{
    char codigo[5]= {0};
    cout<<"Ingrese el codigo del articulo: ";
    cin>>codigo;
    float precio = precio_segun_codigo(art, codigo);
    cout<< "El precio unitario del codigo "<<codigo<< " es "<< precio;
}

void ejercicio3(struct articulo *art)
{
    char codigo[5]= {0};
    cout<<"Ingrese el codigo del articulo: ";
    cin>>codigo;
    struct articulo arti_mostrar = articulo_segun_codigo(art, codigo);
    mostrar_articulo(arti_mostrar);
}

void ejercicio4(struct articulo *art)
{
    p_cargar_articulos(art);
    p_mostrar_articulos(art);
}

void ejercicio5(struct articulo *art)
{
    ordena_ascendente_descripcion(art);
}

void ejercicio6(struct articulo *art)
{
    ordena_ascendente_pu(art);
}













#endif // EJERCICIOS_H_INCLUDED
