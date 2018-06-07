#include <stdio.h>
#include <string.h>

int main(){
    
    
    char newString[20];
    int i,strLength;
    
    printf("enter string");
    
    scanf("%s",newString);
    
    char* ptr = newString;
    
    int newString_size = 0;
    char* newString2 = NULL;
    
    while (*ptr++ != '\0' && *ptr != '"' && *ptr != '\''){
        newString_size++;
    };
    
    
    newString2 = (char*) malloc((newString_size+1) * sizeof(char));
    
    
    newString2[newString_size] = '\0';
    

    
    // Remember to reset the helper pointer so it points to the beginning
    // of the original string!
    ptr = &newString[0];
    int n = 0;
    while (*ptr != '\0'){
        if(*ptr != '"' && *ptr != '\'' ){
            newString2[n++] = *ptr++;
        }else{
            *ptr++;};
        
    };
 
 
    printf("%s \n",newString2);
    
    
    
    return 0;
};


int part1(){
    
    
    char newString[20];
  
    
    printf("enter string");
    
       scanf("%s",newString);
    
   printf("%s",newString);
    
    
    
    return 0;
};


// 1) no double quotes and single quotes are not ignored by c, they are read as part of the string




