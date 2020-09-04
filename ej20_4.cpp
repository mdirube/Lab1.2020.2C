#include <iostream>
#include <cstdlib>

using namespace std;
///Cálculo consumos eléctricos
/*
nroCli
localidad (1 a 3)
cantKw



Fin nroCli==0

precio por kw:
    hasta 100 incluido $10
    hasta 200 incluido $12
    más de 200 $15
Cargo fijo $100

a) Nro cliente con más cantKw por cada localidad
b) Total recaudación localidad
c) nroCli con menor cantidad de cantKw, excluyendo cantKw==0

55 cantKw (10*55)+100 importeTarifa(tarifa100*cantKw)+cargoFijo
125 cantKw (10*100)+(25*12)+100

250 cantKw (10*100)+(12*100)+(50*15)+100

precio100=10
precio200=12
precioMas200=15
cargoFijo=100

if(cantKw>200){
    mas200=cantKw-200
    hasta200=100
    hasta100=100
}
else{
        if(cantKw>100){
        mas200=0
        hasta200=cantKw-100
        hasta100=100
        }
        else{
            mas200=0
            hasta200=0
            hasta100=cantKw
        }
}

importeTarifa=(hasta100*precio100)+(hasta200*precio200)+(mas200*precioMas200)+cargoFijo

hasta100
hasta200
mas200
*/
int main(){
    int nroCli,localidad;
    int hasta100, hasta200, mas200, cantKw, importeTarifa;
    const int precio100=10;
    const int precio200=12;
    const int precioMas200=15;
    const int cargoFijo=100;
    ///punto a
    int maxL1=0, maxL2=0, maxL3=0;
    int cliMax1, cliMax2, cliMax3;
    ///
    ///punto b
    int total1=0, total2=0, total3=0;
    ///
    int menorCliente, minKw=0;

    cout<<"INGRESE EL CLIENTE: ";
    cin>>nroCli;
    while(nroCli!=0){
        cout<<"INGRESE LA CANTIDAD DE KW CONSUMIDOS: ";
        cin>>cantKw;
        cout<<"INGRESE LA LOCALIDAD: ";
        cin>>localidad;
        if(cantKw>200){
            mas200=cantKw-200;
            hasta200=100;
            hasta100=100;
        }
        else{
                if(cantKw>100){
                mas200=0;
                hasta200=cantKw-100;
                hasta100=100;
                }
                else{
                    mas200=0;
                    hasta200=0;
                    hasta100=cantKw;
                }
        }

        importeTarifa=(hasta100*precio100)+(hasta200*precio200)+(mas200*precioMas200)+cargoFijo;
        switch(localidad){
            case 1:if(cantKw>maxL1){
                        maxL1=cantKw;
                        cliMax1=nroCli;
                    }
                    total1+=importeTarifa;
                    break;
            case 2:if(cantKw>maxL2){
                        maxL2=cantKw;
                        cliMax2=nroCli;
                    }
                    total2+=importeTarifa;
                    break;
            case 3:if(cantKw>maxL3){
                        maxL3=cantKw;
                        cliMax3=nroCli;
                    }
                    total3+=importeTarifa;
                    break;

        }
        ///punto c
       if(cantKw!=0){
            if(cantKw<minKw || minKw==0){
                minKw=cantKw;
                menorCliente=nroCli;
            }
        }

        cout<<"INGRESE EL CLIENTE: ";
        cin>>nroCli;
    }
    if(maxL1!=0) cout<<"CLIENTE CON MAS CANTIDAD DE KW DE LOCALIDAD 1: "<<cliMax1<<endl;
    if(maxL2!=0) cout<<"CLIENTE CON MAS CANTIDAD DE KW DE LOCALIDAD 2: "<<cliMax2<<endl;
    if(maxL3!=0) cout<<"CLIENTE CON MAS CANTIDAD DE KW DE LOCALIDAD 3: "<<cliMax3<<endl;

    cout<<"RECAUDACION TOTAL LOCALIDAD 1: "<<total1<<endl;
    cout<<"RECAUDACION TOTAL LOCALIDAD 2: "<<total2<<endl;
    cout<<"RECAUDACION TOTAL LOCALIDAD 3: "<<total3<<endl;

    cout<<"CLIENTE CON MENOR CONSUMO: "<<menorCliente<<endl;
    system("pause");
    return 0;
}
