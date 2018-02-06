//Leer líneas
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("miFichero.txt");
    string mensaje;
    int salir;
    cout<<"El texto dice: ";
    while(fichero.eof()!=1){
      getline(fichero,mensaje);
      if(fichero.eof()!=1){
        cout<<mensaje;
        cout<<endl;                
      }
      
    }
    cin>>salir;    
        
    }
