#ifndef ENCRYPT_H       //Gurds
#define ENCRYPT_H       // Gurds

#include "queue.h"      //import circuler queue functions(AlphabetQueue)

void encryptText(AlphabateQueue *a, char *text, int key);   //function for encrypt string(prototype)
char encryptChar(AlphabateQueue *a, char ch, int key);      // funtion for encrypt character(prototype)

#endif                  // Gurds
