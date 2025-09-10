#include<stdio.h>
int main(void){
int a[10][10],i,j,rows,cols;
printf("Enter the row and columns of the matrix");
scanf("%d %d",&rows,&cols);
printf("Enter the matrix");
for(i=0;i<rows;i++)
  for(j=0;j<cols;j++)
    scanf("%d",&a[i][j]);
    
for(i=0;i<rows;i++){
    if(!(i%2))
      for(j=0;j<cols;j++)
        printf("%d\t",a[i][j]);
     else
      for(j=cols-1;j>=0;j--)
          printf("%d\t",a[i][j]);
    printf("\n");
    }
    return 0;
    }
