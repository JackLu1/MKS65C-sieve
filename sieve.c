#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

/*
 * Finds nth prime
 */
int sieve( int targetPrime ){
    
    int size;
    if (targetPrime == 1){
        return 2;
    }
    if (targetPrime < 5000){
       size = 1.3 * targetPrime * log(targetPrime);
    }
    else{
       size = 1.15 * targetPrime * log(targetPrime);
    }
    int * list = calloc(size, 4);
    int stop = (int)sqrt(targetPrime);

    // array index
    // 0 1 2 3 4 5 6 7 8 9 
    // num
    // 0 1 2 3 4 5 6 7 8 9 10
    list[0] = 1; // 0
    list[1] = 1; // 1
    int i, j;
    for (i = 2; i < stop; i++){
        printf("i = %d\n", i);
        if (!list[i]){
            for (j = 2*i; j < size; j=j+i){
                //printf("j = %d\n", j);
                list[j] = 1;
            } 
        }
    }
    targetPrime--;
    for (i = 0; i < size; i++){
        if (!list[i]){
            targetPrime--;
        }
        if (!targetPrime){
            return i;
        }
    }
    
    //for (int i=0; i<size; i++){
    //    printf("%d\n", list[i]);
    //}

    return 0;
}
