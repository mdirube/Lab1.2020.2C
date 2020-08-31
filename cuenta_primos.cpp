#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int num, cantDiv=0, i=1 , ultimo=1, cantPrimos=0;
    cout<<"NUMERO: ";
    cin>>num;
    while(ultimo<=num){
        i=1;
        cantDiv=0;
        while(i<=ultimo){
            if(ultimo%i==0){
                    cantDiv++;
            }
            i++;
        }
        if(cantDiv==2){
            cantPrimos++;
        }
        ultimo++;
    }
    cout<<"CANTIDAD DE PRIMOS: "<<cantPrimos<<endl;
    system("pause");
    return 0;
}
