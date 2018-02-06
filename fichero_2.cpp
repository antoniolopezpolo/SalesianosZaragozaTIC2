#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string mensaje;
    int salir;
    ifstream fichero("miFichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl;
    fichero.close();//no es obligatorio
    cin>>salir;
    return 0;    
}
