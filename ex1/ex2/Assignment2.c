#include <stdio.h>

int main(){

	char character;
	int onOff=1;
	while(onOff==1){
		printf(" \n Enter one of the characters \"b\" ,\"o\", \"a\", \"d\", \"q\" ");
                scanf("%c", &character );
                int i,j;
		switch(character){ 
	
				case 'b':
					
					for(i=0;i<9;i++){printf("*");};
					printf("\n");
					for(i=0;i<7;i++){printf("*       * \n");};
					for(i=0;i<9;i++){printf("*");};
					break;

					case 'B':
					
					for(i=0;i<9;i++){printf("*");};
					printf("\n");
					for(i=0;i<7;i++){printf("*       * \n");};
					for(i=0;i<9;i++){printf("*");};
					break;

				case 'o':
					
					printf("   ***  ");
					printf("\n");
					printf(" *     * ");
					printf("\n");
					for(i=0;i<5;i++){printf("*       * \n");};
					printf(" *     * ");
					printf("\n");
					printf("   ***  ");
					break;

				case 'O':
					
					printf("   ***  ");
					printf("\n");
					printf(" *     * ");
					printf("\n");
					for(i=0;i<5;i++){printf("*       * \n");};
					printf(" *     * ");
					printf("\n");
					printf("   ***  ");
					break;

				case 'a':
					
					printf("   *   ");
					printf("\n");
					printf("  ***  ");
					printf("\n");
					printf(" ***** ");
					printf("\n");
					for(i=0;i<6;i++){printf("   *   \n");};
					break;

				case 'A':
					
					printf("   *   ");
					printf("\n");
					printf("  ***  ");
					printf("\n");
					printf(" ***** ");
					printf("\n");
					for(i=0;i<6;i++){printf("   *   \n");};
					break;

				case 'd':
					
					printf("    *   ");
					printf("\n");
					printf("   * *  ");
					printf("\n");
					printf("  *   * ");
					printf("\n");
					printf(" *     *");
					printf("\n");
					printf("*       *");
					printf("\n");
					printf(" *     *");
					printf("\n");
					printf("  *   * ");
					printf("\n");
					printf("   * *  ");
					printf("\n");
					printf("    *   ");
					printf("\n");
					break;
				case 'D':
					
					printf("    *   ");
					printf("\n");
					printf("   * *  ");
					printf("\n");
					printf("  *   * ");
					printf("\n");
					printf(" *     *");
					printf("\n");
					printf("*       *");
					printf("\n");
					printf(" *     *");
					printf("\n");
					printf("  *   * ");
					printf("\n");
					printf("   * *  ");
					printf("\n");
					printf("    *   ");
					printf("\n");
					break;

				case 'q':
					onOff = 0;
					break;
				case 'Q':
					onOff = 0;
					break;
				default:
					printf("Invalid entry try again \n");
					break;

		}

	}
	
return 0;
}
