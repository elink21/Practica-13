/*Programa para generar un arreglo aleatorio y ordenarlo mediante el
uso de funciones
Elias Edgardo Segundo Antonio (rediseño) original
Dr Everardo Efren Granda
ICO 21*/
#include<iostream>
#include <locale>
#include<time.h>
#include<stdlib.h>
using namespace std;

void fillArrayMax(int[],int arraySize);
void printArray(int[], int arraySize);
void fillArray(int[],int arraySize);
void bubbleSort(int[],int arraySize);
int main()
{
    char * locale;
    locale = setlocale(LC_ALL, "");
    int  numElementos, auxSwap;
    const int tamanioMaximo=100; // al usar una variable para el tamaño, podemos cambiar este valor fácilmente
    int arregloAleatorio[tamanioMaximo];

    cout << "Ingresa el numero de elementos (máximo 100): ";
    cin >> numElementos;


    fillArray(arregloAleatorio,numElementos);
    cout<<"El arreglo generado es: \n";
    printArray(arregloAleatorio,numElementos);
    bubbleSort(arregloAleatorio,numElementos);

    cout << "El nuevo arreglo ordenado es: " << endl;
    printArray(arregloAleatorio,numElementos);
    return 0;
}

void fillArrayMax(int arr[],int arraySize)
{
    for(int i=0;i<arraySize;i++)arr[i]=0x7FFFFFFF;
}
void fillArray(int arr[],int arraySize)
{
    srand(time(NULL));
    for(int i=0;i<arraySize;i++) arr[i]=1+rand()%100;
}
void printArray(int arr[], int arraySize )
{
    for (int i=0; i<arraySize; i++)
        cout << "arregloAleatorio[" << i << "] = " << arr[i] << endl;
        cout<<"\n";
}
void bubbleSort(int arr[],int arraySize)
{
   int indiceArreglo=0,auxSwap; 

    for (int i=0; i<(arraySize-1); i++) 
    {
        for (int j=(arraySize-1); j>indiceArreglo; j--)
        {
            if (arr[j]<arr[j-1])
            {
                auxSwap=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=auxSwap;
            }
        }
        indiceArreglo++;
    }
}
