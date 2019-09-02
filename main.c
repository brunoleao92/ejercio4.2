#include <stdio.h>
#include <stdlib.h>

int calcularMaxMin(int cantPedidos, int* min, int* max);


int main()
{   int cantPedidos;
    int max,min;
    printf("Ingrese la cantidad de numeros que va a ingresar:");
    scanf("%d", &cantPedidos);
    fflush(stdin);



    calcularMaxMin(cantPedidos,&min,&max);
    return 0;
}

int calcularMaxMin(int cantPedidos, int* min, int* max)
{
    int i,valorMin,valorMax;
    int flag=0;
    valorMax= *max;
    valorMin= *min;


    for(i=0;i<cantPedidos;i++)
    {

        int numero;

        printf("Ingrese un numero:");
        scanf("%d", &numero);
        fflush(stdin);

        if(numero<valorMin || flag==0)
        {
            valorMin=numero;
        }


        if(numero>valorMax || flag==0)
        {
            valorMax=numero;
            flag=1;

        }





    }

    return printf("\nEl numero minimo es:%d y el numero maximo es :%d \n", valorMin, valorMax);
}





