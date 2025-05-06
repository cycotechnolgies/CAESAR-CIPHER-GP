#include "queue.h"

//circuler queue initialize function for alpherbet
void initQueue(AlphabateQueue *a){

    a->front = 0;
    a->rear = SIZE - 1;

    //loop to get alpherbet chars

    for (int i = 0; i < SIZE; i++){

        a->alphabate[i] = 'A' + i;
    
    }
    
}
