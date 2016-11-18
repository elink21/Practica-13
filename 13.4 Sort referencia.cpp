/*Programa para generar un arreglo aleatorio y ordenarlo mediante el
uso de funciones con paso de parametros por apuntador
Elias Edgardo Segundo Antonio (rediseño) original
Dr Everardo Efren Granda
ICO 21*/
#include<iostream>
#include <locale>
#include<time.h>
#include<stdlib.h>
using namespace std;

void fillArrayMax(int* first,int* apSize);
void printArray(int* first, int* apSize);
void fillArray(int* first,int* apSize);
void bubbleSort(int* last,int* apSize);

int main()
{
    char * locale;
    locale = setlocale(LC_ALL, "");
    int  numElementos;
    const int tamanioMaximo=100;
    int arregloAleatorio[tamanioMaximo];
    int* apSize;
    int* first=&arregloAleatorio[0];

    fillArrayMax(first,apSize);

    cout << "Ingresa el numero de elementos (maximo 100): ";
    cin >> numElementos;
    apSize=&numElementos;
    fillArray(first,apSize);

    cout<<"\nEl arreglo generado es: \n";
    printArray(first,apSize);

    bubbleSort(first,apSize);

    cout << "\nEl nuevo arreglo ordenado es:\n " << endl;
    printArray(first,apSize);
    return 0;
}

void fillArrayMax(int* first,int* apSize)
{
    for(int i=0;i<*apSize;i++)
    {

        *first=0x7FFFFFFF;
        first++;
    }
}
void fillArray(int* first,int* apSize)
{
     srand(time(NULL));
    for(int i=0;i<*apSize;i++)
    {
        *first=1+rand()%100;
        first++;
    }
}
void printArray(int* first, int* apSize )
{
     for(int i=0;i<*apSize;i++)
    {
        cout<<*first<<"-";
        first++;
    }
}
void bubbleSort(int* last,int* apSize)
{
   int indiceArreglo=0,auxSwap;
   int* Pos;
   last=last+*apSize-1;
    for (int i=0; i<(*apSize-1); i++)
    {
        Pos=last;
        for (int j=(*apSize-1); j>indiceArreglo; j--)
        {

            if (*Pos<*(Pos-1))
            {
                auxSwap=*Pos;
                *Pos=*(Pos-1);
                *(Pos-1)=auxSwap;
            }
            Pos--;
        }
        indiceArreglo++;
    }
}
