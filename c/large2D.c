#include<stdio.h>
int main(void){
int a[10][10],i,j,rows,cols,large=0;
printf("Enter the row and columns of the matrix");
scanf("%d %d",&rows,&cols);
printf("Enter the matrix");
for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
    scanf("%d",&a[i][j]);
for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
    if(large<a[i][j]) large = a[i][j];
    
printf("Largest number is %d\n",large);
return 0;
}

