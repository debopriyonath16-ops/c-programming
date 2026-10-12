#include<stdio.h>
void main(){int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			if(i==1){
				printf("%d ",j);
			}
			else if(i==2){
				if(j==1){ printf("8 ");
				}
				if(j==2){ printf("9 ");
				}
				if(j==3){ printf("4 ");
				}
			}
			else if(i==3){printf("%d ",8-j);
			}
		}
		printf("\n");
	}
}