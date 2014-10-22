#include <stdio.h>
#define N 256

int main(void)
{
    int i, j;
    int n;
    double A[N * (N + 1) / 2];
    double *aptr = A;
    double x[N];
    double y[N];
    
    scanf("%d", &n);
    
    for ( i = 0 ; i < n ; i++ )
        for ( j = i ; j < n ; j++ ) {
            scanf("%lf", aptr);
            aptr++;
        }
    for ( i = 0 ; i < n ; i++ )
        scanf("%lf", &(y[i]));
    
    upper_trimatrix_solver(A, x, y, n);
    
    for ( i = 0 ; i < n ; i++ )
        printf("%lf ", x[i]);
    return 0;
}
