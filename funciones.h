#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

const int cant_art=2;

struct articulo
{
    char cod_art[5];
    char nombre[30];
    float pu;
    int stock;
};

int menu();
void cargar_articulos(struct articulo *);
void mostrar_articulos(struct articulo *);
float precio_segun_codigo(struct articulo *, char *);
struct articulo articulo_segun_codigo(struct articulo *, char *);
void mostrar_articulo(struct articulo);
void p_cargar_articulos(struct articulo *);
void p_mostrar_articulos(struct articulo *);
void ordena_ascendente_descripcion(struct articulo *);
void ordena_ascendente_pu(struct articulo *);


void ordena_ascendente_pu(struct articulo *art)
{
    struct articulo aux;
    for(int i=0;i<cant_art-1;i++)
    {
        int pos=i;
        for(int j=i+1;j<cant_art;j++)
        {
            if(art[pos].pu>art[j].pu)
            {
                pos=j;
            }
        }
    aux=art[pos];
    art[pos]=art[i];
    art[i]=aux;
    }
}


void ordena_ascendente_descripcion(struct articulo *art)
{
    struct articulo aux;
    for(int i=0;i<cant_art-1;i++)
    {
        int pos=i;
        for(int j=i+1;j<cant_art;j++)
        {
            if(strcmp(art[pos].nombre,art[j].nombre)>0)
            {
                pos=j;
            }
        }
    aux=art[i];
    art[i]=art[pos];
    art[pos]=aux;
    }
}

void p_mostrar_articulos(struct articulo *art)
{
    int contador=1;
    for(struct articulo *i=art;i<art+cant_art;i++)
    {
        cout<<"Articulo numero "<< contador<< ":"<<endl<<endl;
        cout<<"Codigo: " << (*i).cod_art << endl;
        cout<<"Nombre: " << (*i).nombre << endl;
        cout<<"Precio unitario: " << (*i).pu << endl;
        cout<<"Stock: " << (*i).stock << endl << endl;
        contador++;
    };
}

void p_cargar_articulos(struct articulo *art)
{
    int contador=1;
    for(struct articulo *i=art;i<art+cant_art;i++)
    {
        cout<<"Cargar articulo numero "<< contador<<":"<<endl<<endl;
        cout<< "Codigo de articulo: ";
        cin>>(*i).cod_art;
        cout<< "Nombre: ";
        cin.ignore();
        cin.getline((*i).nombre,30);
        cout<< "Precio unitario: $";
        cin>>(*i).pu;
        cout<< "Stock: ";
        cin>>(*i).stock;
        cout<< endl;
        contador++;
    };
}


void mostrar_articulo(struct articulo art)
{
    cout<<"\nCodigo: "<< art.cod_art<< endl;
    cout<<"Nombre: "<< art.nombre <<endl;
    cout<<"Precio unitario: "<< art.pu <<endl;
    cout<<"Stock: "<< art.stock <<endl;
}


struct articulo articulo_segun_codigo(struct articulo *art, char *codigo)
{
    for(int i=0;i<cant_art;i++)
    {
        if(strcmp(art[i].cod_art,codigo)==0)
        {
            return art[i];
        };
    };
struct articulo menos1 = {0};
menos1.pu=-1;
return menos1;
};


float precio_segun_codigo(struct articulo *art, char *codigo)
{
    for(int i=0;i<cant_art;i++)
    {
        if(strcmp(art[i].cod_art,codigo) == 0)
        {
            return art[i].pu;
        };
    };
return -1;
}

void mostrar_articulos(struct articulo *art)
{
    for(int i=0;i<cant_art;i++)
    {
        cout<<"Articulo numero "<< i+1<< ":"<<endl<<endl;
        cout<<"Codigo: "<<art[i].cod_art<<endl;
        cout<<"Nombre: "<<art[i].nombre<<endl;
        cout<<"Precio unitario: "<<art[i].pu<<endl;
        cout<<"Stock: "<<art[i].stock<<endl<<endl;
    };
}

void cargar_articulos(struct articulo *art)
{
    for(int i=0;i<cant_art;i++)
    {
        cout<<"Cargar articulo numero "<<i+1<<":"<<endl<<endl;
        cout<< "Codigo de articulo: ";
        cin>>art[i].cod_art;
        cout<< "Nombre: ";
        cin.ignore();
        cin.getline(art[i].nombre,30);
        cout<< "Precio unitario: $";
        cin>>art[i].pu;
        cout<< "Stock: ";
        cin>>art[i].stock;
        cout<< endl;
    };
}

int menu()
{
    int op;
    system("cls");
    cout<<"*----------------------------------------------------*"<< endl;
    cout<<"*               GUIA DE EJERCICIOS                   *"<< endl;
    cout<<"*             1  -   Ejercicio nro 1                 *"<< endl;
    cout<<"*             2  -   Ejercicio nro 2                 *"<< endl;
    cout<<"*             3  -   Ejercicio nro 3                 *"<< endl;
    cout<<"*             4  -   Ejercicio nro 4                 *"<< endl;
    cout<<"*             5  -   Ejercicio nro 5                 *"<< endl;
    cout<<"*             6  -   Ejercicio nro 6                 *"<< endl;
    cout<<"*             7  -   Ejercicio nro 7                 *"<< endl;
    cout<<"*             8  -   Ejercicio nro 8                 *"<< endl;
    cout<<"*             9  -   Ejercicio nro 9                 *"<< endl;
    cout<<"*            10  -   Ejercicio nro 10                *"<< endl;
    cout<<"*            11  -      Salir                        *"<< endl;
    cout<<"*----------------------------------------------------*"<< endl<< endl;

    cout<<"\nSeleccione una opcion del menu: ";
    cin>>op;
    system("cls");

return op;
}

#endif // FUNCIONES_H_INCLUDED
