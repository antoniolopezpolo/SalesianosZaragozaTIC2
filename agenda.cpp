//Programa agenda
#include<iostream>
#include<fstream>
using namespace std;

int main(){
  char otro='s';
  string nombre;
  string numero;
  ofstream agenda("ficheroAgenda.txt");
  while(otro=='s'){
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Numero: ";
    cin>>numero;
    agenda<<nombre<<","<<numero<<endl;
    cout<<"Deseas introducir otro amigo (s/n)?: ";
    cin>>otro;
  } 
  return 0;
}
