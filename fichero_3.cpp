//Leer líneas
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("miFichero.txt");
    string mensaje;
    int salir;
    cout<<"El texto dice: ";
    for(int nlinea=1;nlinea<=4;nlinea++){
      getline(fichero,mensaje);
      cout<<mensaje;
      cout<<endl;
    }
    cin>>salir;    
        
    }
