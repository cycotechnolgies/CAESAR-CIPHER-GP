# Caesar Cipher Using Circular Queue

A simple and efficient implementation of the Caesar Cipher algorithm in C for encrypting and decrypting messages.

## Overview

The Caesar Cipher is one of the simplest and most widely known encryption techniques. It works by shifting letters in the alphabet by a fixed number of positions. This implementation includes both encryption and decryption capabilities with a configurable shift key.

## Features

- ✨ Message encryption using Caesar Cipher
- 🔄 Message decryption
- 📝 Support for both uppercase and lowercase letters
- 🔢 Configurable shift key (1-25)
- ⭕ Circular queue implementation for alphabet handling
- 🔠 Preserves non-alphabetic characters

## Project Structure

```
CAESAR-CIPHER-GP/
│
├── src/
│   ├── main.c
│   ├── queue.c
│   ├── queue.h
│   ├── encryption.c
│   ├── encryption.h
│   ├── decryption.c
│   └── decryption.h
│
└── README.md
```

## Building the Project

To compile the project, use GCC:

```bash
gcc main.c queue.c encryption.c decryption.c -o cipher
```

## Usage

1. Run the compiled program:
   ```bash
   cipher
   ```

2. Choose option:
   - `E` for encryption
   - `D` for decryption

3. Enter your message

4. Enter the shift key (1-25)

## Example

```
----------------[ Caesar Cipher ]----------------

Options:

[E] Encrypt       
[D] Decrypt       

Choose an option: e

Enter the message: hello world!

Enter the key (1-25): 3

--------------------------------------------------
Encrypted Message: khoor zruog!
--------------------------------------------------
```

## Technical Implementation

### Circular Queue
- Implementation in `queue.h` and `queue.c`
- Fixed size of 26 (English alphabet)
- Efficient circular array implementation

### Encryption/Decryption Logic
- Character-by-character processing
- Case-sensitive implementation
- Preserves spaces and special characters

## Contributors

- K.H.S.N. Chandrasena (2022t01523)
- W.D.D.K. Rathnasooriya (2022t01570)
- Y.E.N. Premathilaka (2022t01564)

## Acknowledgments

- Inspired by classical cryptography
- Built as an educational project
