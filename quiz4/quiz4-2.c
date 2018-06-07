#include <stdio.h>



int main(void)
{
    int size=5, Matrix1[size*size];
    int i,j;
    int display(int[],int);
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            Matrix1[(i*size)+j]=i+j;
        }
    }
    display(Matrix1,size);
    return 0;
}

int display(int Matrix1[], int size)
{
    int i,j;
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++){
            printf("%d ,", Matrix1[(i*size)+j]);
        }
        printf("\n");
    }
    return 0;
}
