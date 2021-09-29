#include <stdio.h>
#include <stdlib.h>

#define N 10

int buscaMayor(int a[N], int *n);
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
    posicion = buscaMayor(arr, &numero);
    printf("El numero mayor -> %d <- se encuentra en la posicion:  %d",numero, posicion);


}


int buscaMayor(int a[N], int *n)
{
    int pos = -1,i;
    *n = 1;

    for(i = 0; i < N; i++)
    {
        if(a[i] > *n )
        {
            pos = i;
            *n = a[i];
        }

    }
    return(pos);
}
