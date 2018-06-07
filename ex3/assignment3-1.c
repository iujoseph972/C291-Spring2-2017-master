#include <stdio.h>
#include <string.h>

int main(void){
   //initialize variables
    int i,j;
    
    int turtleXPos = 0;
    int turtleYPos = 0;
    
    int penSwitch = 0;
    
    
    // 0-south : 1-east : 2-north  : 3-west
    int direction = 0;
    // x/ydirection is positive or negative to change direction
    int xdirection = 1;
    int ydirection = 1;
    
    //stores the previous space value for break purposes
    char previousValue = '*';
    
    
    int onOff = 1;
    
    
    //initialize board
    int board[50][50];
    
    // set board with 0's
    for(i=0;i<50;i++){
        
        for(j=0;j<50;j++){
            
            board[i][j] = 0;
        }
        
    }
    
    while(onOff == 1){
        char command[10];
        
        //takes data
        printf("\n Enter Command (9 to end input): ");
        scanf("%s",command);
        
        
        printf("%s",command);
        
       //handle end of data
        if(command[0] == '9'){
            onOff=0;
        }
        
        if(command[0] == '1'){
            
            penSwitch=0;
            
        }
        if(command[0] == '2'){
            
            penSwitch=1;
            
        }
        if(command[0] == '3'){
            if(direction == 0){
                
                direction=3;
                
            }else{
                direction = direction-1;
            }
            
            
        }
        if(command[0] == '4'){
            if(direction == 4){
                
                direction=0;
                
            }else{
                direction = direction+1;
            }
            
            
        }
        
        if(command[0] == '6'){
            //print board
            for(i=0;i<50;i++){
                
                for(j=0;j<50;j++){
                    
                    if(board[i][j] == 0){ printf(" ");};
                   
                    if(board[i][j] == 1){ printf("*");};
                }
                 printf("\n");
            }
            
            
        }
       
            //handles move forward command by converting string to int
        if(command[0] == '5' ){
            char result[2];
        
         result[0] =command[2];
         result[1] =command[3];
           
            int resultNum = atoi(result);
            printf("integer value of the string is %d\n", resultNum);
            
            if(direction == 0){
                for(i=0;i<resultNum;i++){
                    turtleYPos = turtleYPos+1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            
            if(direction == 1){
                for(i=0;i<resultNum;i++){
                    turtleXPos = turtleXPos-1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            if(direction == 2){
                for(i=0;i<resultNum;i++){
                    turtleYPos = turtleYPos-1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            
            
            if(direction == 3){
                for(i=0;i<resultNum;i++){
                    turtleXPos = turtleXPos+1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            
        }
            
            
        
    }
    
    
    
    //print board
    for(i=0;i<50;i++){
        
        for(j=0;j<50;j++){
            
            if(board[i][j] == 0){ printf(" ");};
           
            if(board[i][j] == 1){ printf("*");};
        }
     printf("\n");
    }
    
    return 0;
}
