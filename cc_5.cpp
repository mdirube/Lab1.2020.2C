#include <iostream>
#include <cstdlib>
/*
1) Cantidad de cursos analizados
2) Edad máxima entre todos los cursos
3) Cantidad de alumnos de cada curso
4) Curso con mayor promedio de edad
5) Curso con menos alumnos


Análisis
Salida: cuántos valores y cuándo informar
1) Un valor, al final del programa
2) Un valor, al final del programa
3) No se cuántos; uno para cada curso, cuando el curso cambia (cuando termina cada curso)
4) Un valor, al final del programa
5) Un valor, al final del programa
*/
using namespace std;

int main(){
    int i, edad, eMax, curso, cursoAnterior;
    cout<<"INGRESE CURSO: ";
    cin>>curso;
    while(curso>=0){
        cursoAnterior=curso;
        eMax=0;
        while(curso==cursoAnterior){
            cout<<"EDAD: ";
            cin>>edad;
            if(edad>eMax) eMax=edad;
            cout<<"INGRESE CURSO: ";
            cin>>curso;
            }
        cout<<"EDAD MAXIMA PARA EL CURSO "<<cursoAnterior<< ": "<<eMax<<endl<<endl;
        system("pause");
        system("cls");
    }
    return 0;
}
