#include<stdio.h>
int main(void){
int a[10][10],i,j,sum=0,rows,cols;
printf("Enter the row and columns of the matrix");
scanf("%d %d",&rows,&cols);
printf("Enter the matrix");
for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
    scanf("%d",&a[i][j]);

for(i=0;i<rows;i++){
  for(j=0;j<cols;j++)
    sum+=a[i][j];
  printf("sum of %d row %d\n",i,sum);
  sum=0;
  }
for(i=0;i<rows;i++){
  for(j=0;j<cols;j++)
    sum+=a[j][i];
  printf("sum of %d column %d\n",i,sum);
  sum=0;
  }

return 0;
}


