#include <stdio.h>

#define N 4
#define M 5

void llenaArr(int matrizNum[N][M]);
int encuentraMenor(int a[M], int *n);

int main()
{
    int m[N][M];
    int a[M];
    int i,j, n;
    int pos;

    llenaArr(m);

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            pos = encuentraMenor(a, &n);
            printf("El numero menor en el renglon %d en la posicion %d : %d ", i, pos, n);


        }
        printf("\n");

    }

}

int encuentraMenor(int a[M], int *n)
{
    int pos = -1,i;
    *n = 100;

    for(i = 0; i < N; i++)
    {
        if(a[i] < *n )
        {
            pos = i;
            *n = a[i];
        }

    }
    return(pos);
}

void llenaArr(int matrizNum[N][M])
{
    int ren, col;
    for(ren = 0; ren < N; ren++)
    {
        /*printf("ingresa el nombre de tu renglon: ", col);
        scanf("%d", &num[ren]);*/

        for(col = 0; col < M; col++)
        {
            printf("Elemento [%d][%d]: ", ren, col);
            scanf("%d", &matrizNum[ren][col]);
        }
    }
}
