/*fecha: 
autor: 
orden:
*/
#include<iostream>

using namespace std; 

int funcionPasosPorValor(int num)
{
    num = num * 10;
    cout<<endl<<"El valor de variable num detro de la función: "<<num;
    return 1;
}
 int main ()
 {
    int num = 2;
    cout<<endl<<"El valor de variable num anted de la llamada: "<<num;
    funcionPasosPorValor(num);
    cout<<endl<<"El valor de variable num despues de la llamada: "<<num;
    return 0;
 }
