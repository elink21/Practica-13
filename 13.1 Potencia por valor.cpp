/* Programa para calcular la potencia de dos parametros
Elias Edgardo Segundo Antonio
ICO 21
1316282
*/
#include<iostream>
#include <stdlib.h>
using namespace std;

float power(int base, int exp);

int main()
{
    char another='Y';
    int base,exp;
    while(another=='Y')
    {
        cout<<"Inserte la base: ";
        cin>>base;
        cout<<"Inserte el exponente: ";
        cin>>exp;
        cout<<base<<" a la "<<exp<<" ="<<power(base,exp);
        cout<<"\nDesea realizar otra prueba?(Y/N): ";
        cin>>another;
    }
}

float power(int base, int exp)
{
	float answer=1;
	if(exp==0)return 1;
	for (int i = 0; i < abs(exp); i++) answer*=base;
		if(exp<0)return 1/answer;
	return answer;
}
