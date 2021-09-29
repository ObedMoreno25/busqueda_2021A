#include <stdio.h>
#include <stdlib.h>


  //Busqueda en arreglo
  //encontrar un dato dentro del arreglo


#define N 10

int buscaValor(int a[N], int n);
int main()
{
    int arr[N];
    int numero;
    int i;
    int posicion;

    for(i = 0; i < N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Dame el numero a buscar: ");
    scanf("%d", &numero);
    posicion = buscaValor(arr, numero);
    if(posicion != -1)
    {
        printf("El valor se encuentra en la posicion:  %d", posicion);
    }
    else
    {
        printf("El numero %d no existe dentro del arreglo: ", numero);
    }
    return 0;
}


int buscaValor(int a[N], int n)
{
    int pos = -1,i;

    for(i = 0; i < N; i++)
    {
        if(a[i] == n)
            pos = i;
    }
    return(pos);
}
