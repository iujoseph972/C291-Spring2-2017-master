#include <stdio.h>

int main(){

	int lines=0, astrisks,tabs=0;
	int onOff=1;
	int i,j,k;
	while(lines < 7){
	printf("How many lines to display? ");
    scanf("%d", &lines );
    printf("\n");

    if(lines<7){
    printf("number of lines must be greater than 6, try again \n ");
    };
	}
    printf("How many asterisk per line?  ");
    scanf("%d", &astrisks );
   	printf("\n");
    if(astrisks > 20 && astrisks < 25 ){

    for(i = 0;i<lines;i++){
    for(j = 0;j<tabs;j++){
    printf("\t");
    };
    for(k = 0;k<astrisks;k++){
    printf("*");
    };
    tabs++;
    printf("\n");


	};
    }else{
     for(i = 0;i<lines;i++){
    for(j = 0;j<tabs;j++){
    printf("\t");
    };
    for(k = 0;k<20;k++){
    printf("*");
    };
    tabs++;
    printf("\n");


	};
    }
    

return 0;
}
