#ifndef DECRYPT_H               // Gurds
#define DECRYPT_H               // Gurds

#include "queue.h"              //import circuler queue functions(AlphabetQueue)

void decryptText(AlphabateQueue *a, char *text, int key);   // funtion for encrypt string(prototype)
char decryptChar(AlphabateQueue *a, char ch, int key);      // funtion for encrypt character(prototype)

#endif                          // Gurds
