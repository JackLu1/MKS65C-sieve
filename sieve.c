#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

/*
 * Finds nth prime
 */
int sieve( int targetPrime ){
    double size = 1.15 * targetPrime * log(targetPrime);

    //if (targetPrime < 5000){
    //   size = 1.3 * targetPrime * log(targetPrime);
    //}
    //else{
    //   size = 1.15 * targetPrime * log(targetPrime);
    //}
    printf("%f\n", size);
    int * list = calloc( size, 4 );

    return targetPrime;
}
