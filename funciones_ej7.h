#ifndef FUNCIONES_EJ7_H_INCLUDED
#define FUNCIONES_EJ7_H_INCLUDED
using namespace std;

const int cant_art7=200;
const int cant_cli=300;

struct ventas
{
    unsigned long int nro_art;
    int nro_cliente;
    int mes;
    int cantidad_vendida;
};

struct articulo7
{
    unsigned long int nro_art;
    unsigned long int stock;
    float PreUn;
};

struct vector_pto_a
{
    float compra_por_mes[12];
};

int menu7();
void carga_registros(articulo7 *);
void ordena_nro_art(articulo7 *);
void lote_proceso(articulo7 *, vector_pto_a *);
int indice(articulo7 *,unsigned long int);
int mostrar(vector_pto_a *,int);

int mostrar(vector_pto_a *venta_acu, int pos)
{
    int meses_compra=0;
    for(int i=0; i<12;i++)
    {
        if(venta_acu[pos].compra_por_mes[i]>0)
        {
            meses_compra++;
        }
    }
return meses_compra;
}

int indice(articulo7 *art,unsigned long int nro_art)
{
    for(int i=0;i<cant_art7;i++)
    {
        if(art[i].nro_art== nro_art)
        {
            return i;
        };
    };
return -1;
}

void lote_proceso(articulo7 *art, vector_pto_a *venta_acumulada)
{
    ventas vent={0};

    cout<<"Ingrese numero de articulo: ";
    cin>>vent.nro_art;

    while(vent.nro_art!=0)
    {
        cout<<"Ingrese numero de cliente: ";
        cin>>vent.nro_cliente;
        cout<<"Ingrese el mes de la venta: ";
        cin>>vent.mes;
        cout<<"Ingrese cantidad de unidades vendidas: ";
        cin>>vent.cantidad_vendida;

        //Punto a):
        int ind = indice(art,vent.nro_art);
        venta_acumulada[vent.nro_cliente-1].compra_por_mes[vent.mes-1] += vent.cantidad_vendida* art[ind].PreUn;

        //Punto b):
        art[ind].stock-=vent.cantidad_vendida;


        cout<<"\nSiguiente venta: \n\n"<<endl;
        cout<<"Ingrese numero de articulo: ";
        cin>>vent.nro_art;
    };
}

void ordena_nro_art(articulo7 *art)
{
    articulo7 aux;
    int pos;
    for(int i=0;i<cant_art7-1;i++)
    {
        pos=i;
        for(int j=i+1;j<cant_art7;j++)
        {
            if(art[j].nro_art<art[pos].nro_art)
            {
                pos=j;
            }
        }
    aux=art[pos];
    art[pos]=art[i];
    art[i]=aux;
    }
}


void carga_registros(struct articulo7 *art)
{
    for(int i=0;i<cant_art7;i++)
    {
        art[i].nro_art=rand();
        art[i].stock=0;
        art[i].PreUn=i;
    }
}


int menu7()
{
    char op;
    cls();
    cout<<"*-----------------------------------*"<<endl;
    cout<<"*              Ejercicio 7          *"<<endl;
    cout<<"*             A - Punto A           *"<<endl;
    cout<<"*             B - Punto B           *"<<endl;
    cout<<"*             S - SALIR             *"<<endl;

    cout<<"Seleccione una opcion del ejercicio: ";
    cin.ignore();
    op = getchar();
    op = toupper(op);

    cls();
return op;
}










#endif // FUNCIONES_EJ7_H_INCLUDED
