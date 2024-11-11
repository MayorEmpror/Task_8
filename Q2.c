#include <stdio.h>
int main(){
    int marks[4][4];
    for(int i =0;i<=3;i++){
        for(int j =0;j<=3;j++){
         printf("enter the marks of subject %d\t of student %d\t",j,i);
         scanf("%d",&marks[i][j]);
        }
    }
     for(int i =0;i<=3;i++){
        for(int j =0;j<=3;j++){
          if(marks[i][j] < 0){
            marks[i][j] = 0;
          }
        }
    }
      for(int i =0;i<=3;i++){
        for(int j =0;j<=3;j++){
          printf(" %d ",marks[i][j]);
         
        }
        printf("\n");
    }
    return 0;
}