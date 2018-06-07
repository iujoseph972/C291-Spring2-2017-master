#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char phoneNumber[7];
    int z;
    
    scanf("%c%c%c-%c%c%c%c",&phoneNumber[0],&phoneNumber[1],&phoneNumber[2],&phoneNumber[3],&phoneNumber[4],&phoneNumber[5],&phoneNumber[6]);
    
     printf("%s",phoneNumber);
    
    int keys(char);
    
    for(z=0;z<7;z++){
        
            keys(phoneNumber[0]);
    };
    
    
    
    
    return 0;
    
};


int keys(char key){
    
     FILE *file = fopen("file.txt", "w+");
     if (file == NULL)
     {
     printf("Error opening file!\n");
     exit(1);
     }
     
    
    
    int letters,i,j;
    int a,b,c,d,e,f,g;
    int numbers;
    
    // char zero[1] = {'0'};
    //  char one[1] = {'1'};
    char *two[3] = {"A","B","C"};
    char *three[3] = {"D","E","F"};
    char *four[3] = {"G","H","I"};
    char *five[3] = {"J","K","L"};
    char *six[3] = {"M","N","O"};
    char *seven[4] = {"P","Q","R","S"};
    char *eight[3] = {"T","U","V"};
    char *nine[4] = {"W","X","Y","Z"};
    
    // if(key == 0){letters = 1;}
    //  if(key == 1){letters = 1;}
    if(key == '2'){letters = 3;}
    if(key == '3'){letters = 3;}
    if(key == '4'){letters = 3;}
    if(key == '5'){letters = 3;}
    if(key == '6'){letters = 3;}
    if(key == '7'){letters = 4;}
    if(key == '8'){letters = 3;}
    if(key == '9'){letters = 4;}
    int num;
    if(key == '2'){num = 2;}
    if(key == '3'){num = 3;}
    if(key == '4'){num = 4;}
    if(key == '5'){num = 5;}
    if(key == '6'){num = 6;}
    if(key == '7'){num = 7;}
    if(key == '8'){num = 8;}
    if(key == '9'){num = 9;}
    
    
    
    
    //char keypad[8][4] = {{'A','B','C'},{'D','E','F'},{'G','H','I'},{'J','K','L'},{'M','N','O'},{'P','Q','R','S'},{'T','U','V'},{'W','X','Y','Z'}};
    char keypad[8] = {two[3],three[3],four[3],five[3],six[3],seven[4],eight[3],nine[4]};
    
    
    for(a=0;a<letters;a++){
        
        for(b=0;b<letters;b++){
            
            for(c=0;c<letters;c++){
                
                for(d=0;d<letters;d++){
                    
                    for(e=0;e<letters;e++){
                        
                        for(f=0;f<letters;f++){
                            
                            for(g=0;g<letters;g++){
                                /*
                                    printf("%c",(keypad[num]+a));
                                   printf("%c",(keypad[num]+b));
                                   printf("%c",(keypad[num]+c));
                                   printf("%c",(keypad[num]+d));
                                   printf("%c",(keypad[num]+e));
                                    printf("%c",(keypad[num]+f));
                                    printf("%c",(keypad[num]+g));
                                  printf("\n");
                                
                                char* n1 =(keypad[num]+a);
                                char* n2 =(keypad[num]+b);
                                char* n3 =(keypad[num]+c);
                                char* n4 =(keypad[num]+d);
                                char* n5 =(keypad[num]+e);
                                char* n6 =(keypad[num]+f);
                                char* n7 =(keypad[num]+g);
                             */
                                fprintf(file, "%c",(keypad[num]+a));
                                fprintf(file, "%c",(keypad[num]+b));
                                fprintf(file, "%c",(keypad[num]+c));
                                fprintf(file, "%c",(keypad[num]+d));
                                fprintf(file, "%c",(keypad[num]+e));
                                fprintf(file, "%c",(keypad[num]+f));
                                fprintf(file, "%c",(keypad[num]+g));
                                fprintf(file, "\n");
                                
                        
                                /*
                                fprintf(file, "%s",n1);
                                fprintf(file, "%s",n2);
                                fprintf(file, "%s",n3);
                                fprintf(file, "%s",n4);
                                fprintf(file, "%s",n5);
                                fprintf(file, "%s",n6);
                                fprintf(file, "%s",n7);
                                fprintf(file, "\n");
                                 
                                 */
                                
                                
                                // fprintf(file, "%c", text);
                                
                            }
                        }
                    }
                }
            }
        }
    }
      fclose(file);
    return 0;
};

