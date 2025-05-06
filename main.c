#include <stdio.h>
#include <string.h>
#include "queue.h"      // Header file for alphabet circular queue
#include "encryption.h" // Header file for encryption logic
#include "decryption.h" // Header file for decryption logic

int main()
{
    AlphabateQueue a;
    initQueue(&a); // Initialize circular queue for alphabets

    printf("\n\n----------------[ Caesar Cipher ]----------------\n\n");

    char message[1000];
    int key;
    char choice;

    // Selection for encryption or decryption
    printf("Options: \n\n[E] Encrypt\n[D] Decrypt\n\nChoose an option: ");
    scanf(" %c", &choice); // Use %c to read a character and add space before %c to consume leftover newline

    getchar(); // Clear newline left in input buffer after scanf

    // Input message
    printf("\nEnter the message: ");
    fgets(message, sizeof(message), stdin); // Read string with spaces
    message[strcspn(message, "\n")] = 0;    // Remove newline at the end

    // Shift key input
    printf("\nEnter the key (1-25): ");
    scanf("%d", &key);

    printf("\n--------------------------------------------------\n");

    // Perform action based on user choice
    if (choice == 'E' || choice == 'e')
    {
        encryptText(&a, message, key);
        printf("Encrypted Message: %s\n", message);
    }
    else if (choice == 'D' || choice == 'd')
    {
        decryptText(&a, message, key);
        printf("Decrypted Message: %s\n", message);
    }
    else
    {
        printf("Invalid option.\n");
    }

    printf("--------------------------------------------------\n");

    return 0;
}
