/* This is a trivial implementation of a XOR Cipher in a file
// the program will get a file, and a key and result in another
// one ciphered. Using the same key on the new file will result
// in the original file.
// md5 get from https://gist.github.com/creationix/4710780#file-md5-c but adapted from this objective
// @author Erick Alessi
// @email erick_alessi@outlook.com  erick.alessi.ea@gmail.com
*/

#define MAX_CIPHER_LENGTH 128
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char *getFileName(){

    return("abc");
}

uint64_t *getCipher(char *cipher){
    uint64_t cipher64;
    size_t len = strlen(cipher);
    cipher64 = md5(cipher, len);
    return(cipher64);
}

int main()
{
    getFileName();
    printf("%u", getCipher("thisIsAUserKeyThatGonnaBeUsedToApplyTheSymetricCipher"));

    return 0;
}
