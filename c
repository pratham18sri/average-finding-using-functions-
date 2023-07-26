#include<stdio.h>
 int averagr( int a,int b, int c );

int main( void){
int a,b,c;
  int average(int a,int b,int c);
  
  printf("enter a:");
    scanf("%d", &a);
    
  printf("enter b:");
    scanf("%d", &b);
    
  printf("enter c:");
    scanf("%d", &c);
  
printf("the average of all number %d",  average (a,b,c));
  
  return 0;
}int average (int a, int b, int c ){
  return (a+b+c)/2;
}
