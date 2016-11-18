/* Programa para calcular la potencia de dos parametros mediante apuntadores
Elias Edgardo Segundo Antonio
ICO 21
1316282
*/
#include<iostream>
#include <stdlib.h>
using namespace std;

void power(int* apBase, int* apExp, float* apAns);

int main()
{
    char another='Y';
    int base,exp;
    float ans=1;
    int* apBase;
    int* apExp;
    float* apAns;
    while(another=='Y')
    {
        cout<<"Inserte la base: ";
        cin>>base;
        cout<<"Inserte el exponente: ";
        cin>>exp;
        apBase=&base;
        apExp=&exp;
        apAns=&ans;
        power(apBase,apExp,apAns);
        cout<<*apBase<<" a la "<<*apExp<<" ="<<ans;
        cout<<"\nDesea realizar otra prueba?(Y/N): ";
        cin>>another;
        ans=1;
    }
}

void power(int* apBase, int* apExp, float* apAns)
{
	if(*apExp==0)
    {
        *apAns=1;
    }
    else
    {
        for (int i = 0; i < abs(*apExp); i++) *apAns*=*apBase;
		if(*apExp<0)*apAns=1/(*apAns);
    }

}
