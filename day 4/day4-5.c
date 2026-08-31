#include<stdio.h>
int main(){
    int units,base_amount = 0;
    printf("Enter Total Units Consumed: ");
    scanf("%d",&units);
    if (units <= 0){
        base_amount = 0;
    }
    else if (units <= 100){
        base_amount = units * 10;
    }
    else if (units <= 150){
        base_amount = (100 * 10) + ((units - 100) * 15);
    }
    else if (units <= 200){
        base_amount = (100 * 10) + (50 * 15) + ((units - 150) * 20);
    }
    else{
        base_amount = (100 * 10) + (50 * 15) + (50 * 20) + ((units - 200) * 25);
	}
    printf("Units Consumed : %d units", units);
    printf("\nEnergy Charges : %d rupees", base_amount);
    return 0;
}