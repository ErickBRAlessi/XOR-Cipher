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

//CREATE A MD5 TO "PROTECT" DIRECT ACCESS TO MEMORY. NOT HARD TO GET THROUGH
uint32_t *getCipher(char *cipherMsg){
    uint32_t cipher32;
    size_t len = strlen(cipherMsg);
    cipher32 = md5(cipherMsg, len);
    return(cipher32);
}

//NEEDS TO CONVERT INT TO STRING FOR XOR CONVERTION.
//TODO IMPLEMENT intToBin
char *cipheredMsg(char *msg, uint32_t cipher32){
    char32_t binCipher;
    binCipher = intToBin(uint32_t cipher32);
    for(int count = 0; count <= (sizeof(msg)/sizeof(char); count++){
        msg[count] ^= cipher32[count];
    }
    return("");
}

int main()
{
    getFileName();
    cipheredMsg("ABC", getCipher(""));
    return 0;
}


