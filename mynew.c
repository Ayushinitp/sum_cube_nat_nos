#include <stdio.h>
 int main(){
     int i , n, sum =0,cube=0;
      printf("Enter any number : ");
    scanf("%d",&n);
    printf("Sum of squares of %d natural numbers are : ",n);
    for(i=1;i<=n;i++){
        sum=sum+i*i;
    }
    printf("%d\n",sum);
    printf("Sum of Cubes of 1st %d natural numbaers are : ",n);
    for(i=1;i<=n;i++){
        cube=cube+i*i*i;
    }
    printf("%d",cube);
    return 0;
 }