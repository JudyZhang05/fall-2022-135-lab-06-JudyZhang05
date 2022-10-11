#include <iostream>
#include <cctype>
#include "caeser.h"

//Task B

char shiftChar(char c, int rshift){
    if (isupper(c)){
        c += rshift;
        while (ispunct(c) || islower(c)){
            c-=26;
        }
    }
    else if (islower(c)){
        c += rshift;
        while (c > 122 || c < 97){
            c-=26;
        }
    }
    return c; 
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string result;
    for (int i = 0; i < plaintext.length(); i++){
        result += shiftChar(plaintext[i], rshift); 
    }
    result += "\n";
    return result;
}