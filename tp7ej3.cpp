/**3) Escribir una función que reciba tres números y retorne el promedio*/
#include<iostream>
using namespace std;
#include<cstdlib>

float  funcion(float ,float   ,float  );


int main(){
    float n1,n2,n3,resultado,promedio;
    cout<<"ingrese un numero:"<<endl;
    cin>>n1;
    cout<<"ingrese un numero:"<<endl;
    cin>>n2;
    cout<<"ingrese un numero:"<<endl;
    cin>>n3;
    promedio=funcion(n1,n2,n3);
    cout<<"PROMEDIO: ";
    cout<<promedio<<endl;
    system("pause");
    return 0;
}


float  funcion(float a,float   b,float  c){
    float suma,promedio;
    suma=a+b+c;
    promedio=suma/3;
    return promedio;
}
