#include <stdio.h>
int main(){
    int rows;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(int i = 0;i<=rows;i++){
        for(int j=0;j<=rows;j++){
           if( i == j || i ==0 || j==rows || i==rows || j == 0|| i+j == rows){
             printf(" * ");
       }else printf("   ");
        }
        printf("\n");
    } 
    return 0;
}