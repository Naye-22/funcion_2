/* Fecha: 10/6/2024
Autor: 
orden:

*/
#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;
int SumaAlleatorio(int cantidad, int limiteinferior, int limitesuperior)
{
//REVISAR NOTACION húngara básica
    int suma = 0; //acumulador
    for(int k=1; k<=cantidad; k++){
        int mun = limiteinferior + rand() % (limitesuperior +1 - limiteinferior);
        //int num = 45 + rand() %(80+1-45);
            suma+=mun; //sum = suma + mun;
    }
    return suma; 
}
 int main()
 {
    srand(time(NULL));
    int res1 = SumaAlleatorio(100,45,80);
    int res2 = SumaAlleatorio(10,1,50);
    int res3 = SumaAlleatorio(20,1000,2000);
    cout<<endl<<"resultado de la suma de aleatorios 1: "<<res1;
    cout<<endl<<"resultado de la suma de aleatorios 2: "<<res2;
    cout<<endl<<"resultado de la suma de aleatorios 3: "<<res3;
    cout<<endl<<"resultado de la suma de aleatorios 4: "<<SumaAlleatorio(12, 1, 12);
    return 0;

 }
