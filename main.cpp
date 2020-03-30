#include <stdio.h>
#include "chasing.h"

const int index_A = 3;
const int index_B = 3;
const int index_C = 3;

int main() {
        int **A[index_A] = {}, *B[index_B] = {}, C[index_C] = {2, 1, 4};

        chasing(A, index_A, B, index_B, C, index_C);
        
        
        int **ansA[index_A] = {} ,*ansB[index_B] = {};
        
        for (int i = 0; i < index_A; i++)
                ansA[i] = NULL;

        for (int i = 0; i < index_B; i++)
                ansB[i] = NULL;
        
        ansA[2] = &B[1], ansA[3] = &B[0], ansB[1] = &C[1], ansB[2] = &C[0];

        //Check A
        for (int i = 0; i < index_A; i++)
                if (A[i] != ansA[i] )
                        printf("A[%d] wrong answer!\n", i);
 
        //Check B
        for (int i = 0; i < index_B; i++)
                if (B[i] != ansB[i] )
                        printf("B[%d] wrong answer!\n", i);
        
        return 0;
}
