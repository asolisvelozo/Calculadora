#include <iostream>
#include <math.h>
using namespace std;

void pedirdatos(int &n, float e[100]);
float suma(int n, float e[100]);
float promedio(int n, float e[100]);



int main() {
    int n, o;
    float e[100], p, s;
    cout<<"Ingrese 1 para hacer una suma\nIngrese 2 para hacer un promedio\nIngrese 3 para saber el maximo\nIngrese 4 para saber el minimo\n";
    cin>>o;
    switch (o) {
        case 1:
            cout << "Has seleccionado sumar" << endl;
            cout<<"El valor de la suma es: "<< suma(n, e);
            break;
        case 2:
            cout << "Has seleccionado hacer un promedio" << endl;
            promedio(n,e);
            break;
        case 3:
            cout << "Opción 3 seleccionada." << endl;
            break;
        case 4:
            cout << "Opción 3 seleccionada." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }



    return 0;
}

void pedirdatos(int &n, float e[100]){

    cout<<"Cuantos numeros usara?: ";
    cin>>n;
    e[100]=e[n];
    int i;


    for(i=0; i<n;i++){

        e[n]=0;
    }


    for(i=0; i<n; i++){

        cout<<"Ingrese un numero: ";
        cin>>e[i];
    }

}

float suma(int n, float e[100]){

    pedirdatos(n, e);
    float s =0;
    for(int i=0; i<n; i++){
        s=s+e[i];

    }

    return s;

}

float promedio(int n, float e[100]){

    float p=0;


    float s=suma(n, e);

    p=s/n;



    return p;


}
