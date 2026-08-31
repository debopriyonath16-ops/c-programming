#include<stdio.h>
int main(){
    char ch;
    printf("Enter H or h for head and T or t for tails: ");
    scanf("%c",&ch);
    if (ch =='H' || ch =='h'){
        printf("Heads,captain won");
    }
    else if (ch =='T' || ch =='t'){
        printf("Tails,captain lost");
    }
    return 0;
}
