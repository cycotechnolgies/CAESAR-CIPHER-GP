#include <ctype.h>
#include <string.h>
#include "decryption.h"         //import header file to get funtions prototypes

// function to decrypt on character (exclude symbols and spaces)
char decryptChar(AlphabateQueue *a, char ch, int key){

    if (isalpha(ch)){                                   //isalpha use to check character is an alphabet letter

        char base = isupper(ch) ? 'A' : 'a';            // check letter is upper case or lower case
        int index = (ch - base - key + 26) % 26;        // calculate index => Ex: 'E', key = 3 -> (69 - 65 - 3 + 26) % 26 = 1
        return base + index;                            // shift character => Ex: 65 + 1 = 66 -> B

    }

    return ch;                                          //return the derypted character

}
// function to decrypt on string
void decryptText(AlphabateQueue *a, char *text, int key){
    
    // loop to get characters from text/message
    for (int i = 0; i < strlen(text); i++){             //strlen use to get length of the message

        text[i] = decryptChar(a, text[i], key);         // use decryptChar to decrypt one character and assign back to the string
    }

}
