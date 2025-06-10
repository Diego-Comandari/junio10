#include <iostream>
using namespace std;

struct Estudiante{

int edad;
string nombre;
string carnet;



};

int main (){
Estudiante estudiante;
int notas=3;
float notafinal;
float nota[100];
float total = 0;
float cum=0;


//falta corregir todo jaja

cout<<"Ingrese la edad del estudiante " <<i+1<< endl;
cin>> estudiante.edad;
cout<<"Ingrese el nombre del estudiante: " <<endl;
cin>>estudiante.nombre;
cout<<"Ingrese el carnet del estudiante: " <<endl;
cin>>estudiante.carnet;



 for (int i=0; i <notas; i++){
cout <<"Ingrese la nota " <<i+1<< ":" <<endl;
cin>>nota[i];
total= 5* nota[i];

 }
cum= total/3;

cout<<"Su cum es: " <<total<<endl;


    return 0;
}