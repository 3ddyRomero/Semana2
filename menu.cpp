#include <iostream>
#include <string>

//using namespace std;

using std::cout;
using std::cin;
using std::string;
using std::endl;

//funcion que despliega un menu, captura la opcion y la valida.
int menu(){
    int opcion = 0;
    //ejemplo de do while
    do{
        cout<<"     MENU"<<endl
            <<"Opcion  1"<<endl
            <<"Opcion  2"<<endl
            <<"Opcion  3"<<endl
            <<"Ingrese una opcion: ";
            
            cin >> opcion;
            
            if(opcion < 1 || opcion > 3){
                cout <<"Opcion fuera de rango, intente de nuevo"<<endl;
                opcion = 0;
            }
        }while (opcion == 0);
        return opcion;
}

int main()
{
    menu();
  
}
