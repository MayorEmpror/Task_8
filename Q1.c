#include <stdio.h>
void row_sum(){
int sum_rows[3] = {0,0,0};
int array[3][3] = {{ 3, 7, 5 },
  { 6, 8, 3 },
  { 8, 2, 1 }
  };
for(int i = 0;i<=2;i++){
for(int j = 0;j<=2; j++) {
sum_rows[i] += array[j][i];
}
}
for(int k =0;k<=3;k++){
printf("%d\n",sum_rows[k]);
}
}


void col_sum() {
int sum_cols[3] = {1,0,0};
int array[3][3] = {{ 3, 7, 5 },
  { 6, 8, 3 },
  { 8, 2, 1 }
  };
for(int i = 0;i<=2;i++){
for(int j = 0;j<=2; j++) {
sum_cols[i] += array[j][i];  // 00 10 20 21 22 21 31          
}
}
for(int k =0;k<=2;k++){
printf("%d\n",sum_cols[k]);
}
}




int main(){
// col_sum();

return 0;
}