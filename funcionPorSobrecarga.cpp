/*fecha: 
autor: 
orden:
*/
#include<iostream>
using namespace std;
 
string saludo()
{
    return "Bienvenido...";
}
string saludos(string nombre)
{
    return "Bienvenido..." + nombre;
}
string saludos(string nombre, int edad)
{
    if (edad >=18)
    return "Bienvenido señor "+ nombre;
    else
    return "Bienvenido joven " + nombre;
}

 int main()
 {
    cout<<endl<<saludo();
    cout<<endl<<saludos("Juan");
    cout<<endl<<saludos ("Juan Perez", 18);

    string nombre = "Jose Alcivar";
    cout<<endl<<saludos(nombre, 16);

    return 0;
 }