#include <stdio.h>
int main(){
    int m,n; 
    printf("enter dimensions m:\t");
    scanf("%d",&m);
    printf("enter dimensions m:\t");
    scanf("%d",&n);
     int MATRIX_A[m][n];
     int MATRIX_B[m][n];
     int MATRIX_RESULTANT[m][n];
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("Values of Matrix A\n");
            printf("enter value at: (%d,%d):\t",i,j);
            scanf("%d",&MATRIX_A[i][j]);
        }
     }
      for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            printf("Values of Matrix B\n");
            printf("enter value at: (%d,%d):\t",i,j);
            scanf("%d",&MATRIX_B[i][j]);
        }
     }
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
           MATRIX_RESULTANT[i][j] = MATRIX_A[i][j] + MATRIX_B[i][j];
        }
     }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
          printf("%d\t",MATRIX_RESULTANT[i][j]);
        }
        printf("\n");
     }

    return 0;
}