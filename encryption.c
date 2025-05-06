#include <ctype.h>
#include <string.h>
#include "encryption.h"                                 //import header file to get funtions prototypes

// function to encrypt on character (exclude symbols and spaces)
char encryptChar(AlphabateQueue *a, char ch, int key){
    
    if (isalpha(ch))                                    //isalpha use to check character is an alphabet letter
    {
        char base = isupper(ch) ? 'A' : 'a';            //check letter is upper case or lower case
        int index = (ch - base + key) % 26;             //calculate index => Ex: 'B', key=3 -> index = (66 - 65 + 3) % 26 = 4 
        return base + index;                            //shift character => Ex: 65 + 4 = 69 -> E
    }
    return ch;                                          //return the ecrypted character

}

// function to encrypt on string
void encryptText(AlphabateQueue *a, char *text, int key){

    //loop to get characters from text/message
    for (int i = 0; i < strlen(text); i++){             //strlen use to get length of the message

        text[i] = encryptChar(a, text[i], key);         //use encryptChar to encrypt one character and assign that to string array

    }

}
