#include <iostream>

using namespace std;

const int longCad = 20;
struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticul;
};

//funciones 
void ingresar(costoPorArticulo *, int);
void mostrar(costoPorArticulo *, int);
float total(costoPorArticulo *datos, int);

int main(void){

int n;

cout<<"FACTURA DE COMPRA"<<endl<<endl;
cout<<"¿Cuantos articulos compro?"<<endl;
cin>>n;

costoPorArticulo *listado = new costoPorArticulo[n];

ingresar(listado, n);
mostrar(listado, n);
total(listado, n);

return 0;
}

//Funcion que pide al usuario los articulos comprados 
void ingresar(costoPorArticulo *datos, int n){
int i;
cout<<"Ingrese el nombre del articulo que compro, cantidad y precio unitario:"<<endl;
    for(i = 0; i < n; i++){
        cout<<"Nombre: ";
        cin>>(datos + i)->nombreArticul;
        cout<<"Cantidad: ";
        cin>>(datos + i)->cantidad;
        cout<<"Precio: ";
        cin>>(datos + i)->costoPorArticul;
    }
}

//Funcion que muestra los articulos comprados con su nombre cantidad comprada y su precio
void mostrar(costoPorArticulo *datos, int n){
int i;
cout<<""<<endl;
cout << "Los articulos comprados son:"<<endl<<endl;
    for(i = 0; i < n; i++){
        cout<<"Nombre: ";
        cout<<(datos + i)->nombreArticul<<endl;
        cout<<"Cantidad: ";
        cout<<(datos + i)->cantidad<<endl;
        cout<<"Precio: ";
        cout<<(datos + i)->costoPorArticul<<endl;
        cout<<endl;
}
}

//Funcion que muestra el total de lo comprado
float total(costoPorArticulo *datos, int n){

int i;
 for(i = 0; i < n; i++)
        (datos + i)->precio = (datos + i)->cantidad * (datos + i)->costoPorArticul * n;
         

    cout<<"El total es:";
    cout<<(datos)->precio;
}