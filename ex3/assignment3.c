#include <stdio.h>
#include <string.h>

int main(void){
   //initialize variables
    int i,j;
    
    //turtle's cooridinates
    int turtleXPos = 0;
    int turtleYPos = 0;
    
    //pen postion 0 is up 1 is down
    int penSwitch = 0;
    
    
    // 0-south : 1-east : 2-north  : 3-west
    int direction = 0;
  
    
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
        // input as string
        char command[10];
        
        //takes data
        printf("\n Enter Command (9 to end input): ");
        //takes input
        scanf("%s",command);
        
        
       //handle end of data
        if(command[0] == '9'){
            onOff=0;
        }
        
        //handles putting pen up
        if(command[0] == '1'){
            
            penSwitch=0;
            
        }
        
        //handles putting pen down
        if(command[0] == '2'){
            
            penSwitch=1;
            
        }
        //handles turning right
        if(command[0] == '3'){
            //if direction is at 0 jumps to 3
            if(direction == 0){
                direction=3;
                
            }else{
                //else it subtracts 1
                direction = direction-1;
            }
            
            
        }
        
        //handles turning left
        if(command[0] == '4'){
            //if direction is at 3 jumps to 0
            if(direction == 4){
                
                direction=0;
                
            }else{
                //else adds 1
                direction = direction+1;
            }
            
            
        }
        
        //print board on command
        if(command[0] == '6'){
          
            for(i=0;i<50;i++){
                
                for(j=0;j<50;j++){
                    //prints a space for 0's
                    if(board[i][j] == 0){ printf(" ");};
                    //prints an * for 1's
                    if(board[i][j] == 1){ printf("*");};
                }
                //breaks lines every row
                 printf("\n");
            }
            
            
        }
       
            //handles move forward command by converting string to int
        if(command[0] == '5' ){
            char result[2];
        
        // grabs digits after ',' from command array and puts them in result array
         result[0] =command[2];
         result[1] =command[3];
           
            //converts move distance string to integer
            int resultNum = atoi(result);
          
            
                // 0-south : 1-east : 2-north  : 3-west
            //moves turtle south
            if(direction == 0){
                for(i=0;i<resultNum;i++){
                    //changes turtle Y pos
                    turtleYPos = turtleYPos+1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            
             //moves turtle east
            if(direction == 1){
                for(i=0;i<resultNum;i++){
                     //changes turtle X pos
                    turtleXPos = turtleXPos-1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
             //moves turtle north
            if(direction == 2){
                for(i=0;i<resultNum;i++){
                     //changes turtle Y pos
                    turtleYPos = turtleYPos-1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            
             //moves turtle west
            if(direction == 3){
                for(i=0;i<resultNum;i++){
                    //changes turtle X pos
                    turtleXPos = turtleXPos+1;
                    if(penSwitch == 1){
                        board[turtleXPos][turtleYPos] = 1;
                    }
                }
            }
            
        }
            
            
        
    }
    
    
    

    
    return 0;
}
