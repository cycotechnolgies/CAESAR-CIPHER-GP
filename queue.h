#ifndef QUEUE_H                 //gurds
#define QUEUE_H                 //gurds

#define SIZE 26                 //size of circuler queue

typedef struct                  //define data type as AlphabatQueue 
{
    char alphabate[SIZE];      //data type for alpherbet
    int front;                 // data type for queue front
    int rear;                  // data type for queue rear
} AlphabateQueue;

void initQueue(AlphabateQueue *a); // function to initialize circuler queue

#endif                          // gurds
