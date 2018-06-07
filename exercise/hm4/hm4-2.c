#include <stdio.h>

/*
 
 1)
 
 
 
 
 */


int main(){
    
/* 1) */  printf (" Problem 1 \n");
    //print space
    printf("\n");
    
    //intitialize i
    int  i;
    //initialize SIZE
    int SIZE = 7;
    // a) initialize numerals
    unsigned int numerals[7] =  {6,8,10,12,14,16,18};
    // b) define pointer vPtr
    unsigned int* vPtr;
    // c) print elements of numerals
    for(i=0;i<SIZE;i++){
        printf("%d\n",numerals[i]);
    };
    
    //print space
    printf("\n");
    
    // d)  assign vPtr to numerals starting element address both ways
    vPtr = numerals;
    vPtr = &numerals[0];
    
    // e) & f) print numerals using offset notaition Both ways
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%d\n",  *( &numerals[0] + i ) );
    };
    
    for ( i = 0; i < SIZE; i++ ) {
        printf( "%d\n",  *( numerals + i ) );
    };
    
    // g) print the elements of numerals by subscripting the pointer to the array
    for (i = 0; i < SIZE; i++){
        printf ("%d\n", vPtr[i]);
    };
    /* h ) refer to element 5 of array pointer name subscript notation*/
    printf ("%d\n", *( &vPtr[0] + 5  ) );
    /* refer to element 5 of array pointer/subscrip notation */
    printf ("%d\n", *( vPtr + 5 ) );
    
    /* i) 1004700 + (5 * 4) = 1004720 the value stored at 1004720 is 16.
     
     j) The address is 1004700.
     */
    
    //print space
    printf("\n");
/* 2) */ printf (" Problem 2 \n");
    //print space
    printf("\n");
    
    //initialize interger numeral1 and numeral2
    long numeral1 = 300000;
    long numeral2;
    /* a) define lPtr to be a pointer to a long typed object*/
    
    long *lPtr;
    
    /* b)  Assign the address of variable numeral1 to lPtr  */
    
    lPtr = &numeral1;
    
     /* c)  print the value pointed to by lPtr  */
    printf ("%ld\n", *lPtr );
    
     /* d)  Assign the value of the object pointed to by lPtr to variable numeral2 */
    numeral2 = *lPtr;
    
    /* e)  print the value of numeral2 */
    printf ("%ld\n", numeral2 );
    
    /* f)  print the adress of numeral1 */
    printf ("%d\n", &numeral1 );
    
    /* g)  print the adress stored in lPtr.   */
    printf ("%d\n", &lPtr );
    
    
    return 0;
}




