#include<stdio.h>
int main (){
    int x,y,sum=0;
    printf("input the ammount number : ");
    scanf("%d",&y);
    printf("the numbers  : \n");
    for (x=1; x<=y; x=x+1){
        printf("%d\n",x);
        sum=sum+x*x;
    }
    printf("the sum of numbers  : \n");
    printf("%d\n",sum=sum);
    return 0;
}
