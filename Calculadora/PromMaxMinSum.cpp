#include <iostream>
#include <math.h>
using namespace std;

void pedirdatos(int &n, float e[100]);
float suma(int n, float e[100]);
float promedio(int n, float e[100]);
float maximo(int n, float e[100]);
float minimo(int n, float e[100]);


int main() {
    int n, o;
    float e[100], p, s, m, mini;
    cout<<"Ingrese 1 para hacer una suma\nIngrese 2 para hacer un promedio\nIngrese 3 para saber el maximo\nIngrese 4 para saber el minimo\n";
    cin>>o;
    switch (o) {
        case 1:
            cout << "Has seleccionado sumar" << endl;
            cout<<"El valor de la suma es: "<< suma(n, e);
            break;
        case 2:
            cout << "Has seleccionado hacer un promedio" << endl;
            p=promedio(n,e);
            cout<< "El promedio es: "<<p;
            break;
        case 3:
            cout << "Has seleccionado saber el maximo" << endl;
            m=maximo(n,e);
            cout<<"El maximo es:"<<m;
            break;
        case 4:
            cout << "Has seleccionado saber el minimo" << endl;
            mini=minimo(n,e);
            cout<<"El minimo es:"<<mini;
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
    int i;

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
    pedirdatos(n,e);
    float s=0;
    for(int i=0; i<n; i++){
       s=s+e[i];
    }
    return s/n;
}

float maximo(int n, float e[100]){

    pedirdatos(n,e);
    float maxi=e[0];
    for(int i=0; i<n; i++){

        if(e[i]>maxi){
            maxi=e[i];
        }

    }
return maxi;

}


float minimo(int n, float e[100]){

    pedirdatos(n,e);
    float mini=e[0];
    for(int i=0; i<n; i++){

        if(e[i]<mini){
            mini=e[i];
        }

    }
return mini;

}






}
