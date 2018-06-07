#include <stdio.h>

int main(){

	char character;
	int onOff=1;
	while(onOff==1){
		printf("Enter one of the characters \"b\" ,\"o\", \"a\", \"d\", \"q\" ");
                scanf("%c", &character );
		switch(character){ 
	
				case 'b':
					printf("%c \n", character);
					onOff = 0;
					break;
				default:
					printf("Invalid entry try again \n");

		}

	}
	
return 0;
}
