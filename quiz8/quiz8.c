#include <stdio.h>

int main(){
    unsigned int a = 6000;
    char hex[100]="0xf";
    char e[10000];
    int decimalNumber,onOff = 1,count = 0,i;
    int c=400,d=200;
    float f = 4.132;
    int hour, minute,second;
    char s[100];
    
     printf("-- -- -- Problem 1 -- -- --\n");
    printf("a) %-16.*d \n",7,a);
    printf("b) ");
    sscanf(hex,"%x",&decimalNumber);
    printf("\n");
    printf("The value of hex: %#x as a decimalNumber is %d\n",decimalNumber,decimalNumber);
    printf("c)%d %+d\n",c,c);
    printf("d) %#x\n",d);
    printf("e)  \n");
    printf ("enter chars: \n");
    scanf ("%[^z]", e);
    printf("\n");
    printf("%s",e);
    printf("\n");
    printf("f) %09.3f \n",f);
    printf("g)  ");
    scanf("%d%*c%d%*c%d", &hour, &minute, &second);
    printf("%d %d %d",hour,minute,second);
    printf("\n");
    printf("h)  ");
    scanf( " \"%[^\"] ", s);
   // scanf( “\”%[^\”]” , s );
    printf("\n");
    for(i=0;i<100;i++){
        if(s[i] != '\0'){
            printf("%c",s[i]);
        }
    }
   
    printf("\n");
    printf("i) ");
    scanf ("%d:%d:%d", &hour, &minute, &second);
    printf("%d %d %d",hour,minute,second);
    printf("\n");
           
    
    printf("-- -- -- Problem 2 -- -- --\n");
    printf("a)  ");
    printf( "%-10d\n", 30000 );
    printf(" // correct \n" );
    printf("b)  ");
    printf( "%c", "This is a string" );
    printf(" // This is wrong because it is trying to print a string but tells printf it is printing a character \n" );
    printf("c)  ");
    printf( "%*.*lf\n", 8, 3, 3024.981654 );
    printf(" // correct \n" );
    printf("d)  ");
    printf( "%#o\n%#X\n%#e\n", 17, 17, 1008.83689 );
    printf(" // correct \n" );
    printf("e)  ");
    printf( "% ld\n%+ld\n", 2000000, 2000000 );
    printf(" // prints fine but % ld should probably be %ld  \n" );
    printf("f)  ");
    printf( "%10.2E\n", 454.93738 );
    printf(" // correct \n" );
    printf("g)  ");
    printf( "%10.2g\n", 464.93738 );
    printf(" // correct \n" );
    printf("h)  ");
    printf( "%d\n", 10.987 );printf(" // should be %f \n" );

    
    
    printf("-- -- -- Problem 3 -- -- --\n");
    
    printf("a) Files\n");
    printf("b) Record \n");
    printf("c) Key \n");
    printf("d) Field \n");
    printf("e) the standard input,the standard output, the standard error \n");
    printf("f) fputc \n");
    printf("g) fputs \n");
    printf("h) fwrite \n");
    printf("i) fseek \n");
    
    
    printf("-- -- -- Problem 4 -- -- --\n");
    
    printf("a) True \n");
    printf("b) False \n");
    printf("c) True \n");
    printf("d) True \n");
    printf("e) False \n");
    printf("f) False \n");
    printf("g) False \n");
    printf("h) False \n");
    printf("i) True \n");
    
    return 0;
}



