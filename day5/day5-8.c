#include<stdio.h>
int main(){
    int i,x;
    printf("enter number:");
    scanf("%d",&x);
    printf("factors of %d are :",x);
    for(i=1;i<=x;i++){
        if(x%i==0){
            printf(" %d ",x/i);
        }
    }
    return 0;
}