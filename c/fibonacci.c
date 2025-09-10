#include<stdio.h>
int fibonacci(int n){
int a=0,b=1,c=0;
if(n==1)printf("%d",a);
else if(n==2)printf("%d %d",a,b);
else if(n>2){
  printf("%d %d ",a,b);
  for(int i=3;i<=n;i++)
    c=a+b,a=b,b=c,printf("%d ",c);
    
    
  }
else printf("Please give a positive value");
}

int main(void){
int n;
printf("Enter the number");
scanf("%d",&n);
fibonacci(n);
return 0;
}


