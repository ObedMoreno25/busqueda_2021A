#include <stdio.h>

#define N 3
#define M 4

void llenaArr(int matrizNum[N][M]);
int encuentraMenor(int a[M], int *menor);

int main()
{
    int m[N][M];
    int ren, menor;
    int pos;

    llenaArr(m);

    for(ren = 0; ren < N; ren ++)
    {
            pos = encuentraMenor(m[ren], &menor);
            printf("El numero menor en el renglon %d en la posicion %d  es : %d ", ren, pos, menor);

        printf("\n");

    }

}

int encuentraMenor(int a[M], int *menor)
{
    int pos = -1,i;
    *menor = a[0];

    for(i = 0; i < M; i++)
    {
        if(a[i] < *menor )
        {
            *menor  = a[i];
             pos = i;
        }

    }
    return(pos);
}

void llenaArr(int matrizNum[N][M])
{
    int ren, col;
    for(ren = 0; ren < N; ren++)
    {

        for(col = 0; col < M; col++)
        {
            printf("Elemento [%d][%d]: ", ren, col);
            scanf("%d", &matrizNum[ren][col]);
        }
    }
}
