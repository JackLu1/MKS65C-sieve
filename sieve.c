#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

/*
 * Finds nth prime
 */
int sieve( int targetPrime ){
    int size = (int)(1.15 * targetPrime * log(targetPrime));
    int stop = (int)sqrt(size);
    int ans;
    
    printf("%d\n", targetPrime);
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

    // array index
    // 0 1 2 3 4 5 6 7 8 9 
    // num
    // 0 1 2 3 4 5 6 7 8 9 10
    int i, j;
    for (i = 2; i < stop; i++){
        printf("i = %d\n", i);
        if (!list[i]){
            for (j = i*i; j < size; j+i){
                list[j] = 1;
            } 
        }
    }
    for (i = 0; i < size; i++){
        if (!list[i]){
            printf("%d\n", i);
        }
    }
    
    //for (int i=0; i<size; i++){
    //    printf("%d\n", list[i]);
    //}

    return targetPrime;
}
