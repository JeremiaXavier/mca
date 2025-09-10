#include<stdio.h>
#include<ctype.h>
int main(void){
char str[50][50],search[50];
int n,i;
printf("Enter the number of rows");
scanf("%d",&n);
printf("Enter the strings");
for(i=0;i<n;i++)
  scanf("%s",str[i]);

printf("Enter the item to be checked");
scanf("%s",search);
for(i=0;i<n;i++){
  if(!(strcmpi(str[i],search)){
    printf("Item found");
    break;}
}
if(i==n)
printf("Not found");

return 0;
}
