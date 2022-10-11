#include <iostream>
#include <cctype>
#include <iomanip>
#include "decrypt.h"
#include "caeser.h"
#include "vigenere.h"

//Task D

char unshift(char c, int rshift){
    if (isupper(c)){
        c -= rshift;
        while (ispunct(c) || islower(c)){
            c+=26;
        }
    }
    else if (islower(c)){
        c -= rshift;
        while (c > 122 || c < 97){
            c+=26;
        }
    }
    return c; 
}

std::string decipher(std::string plaintext, int rshift){
    std::string result;
    for (int i = 0; i < plaintext.length(); i++){
        result += unshift(plaintext[i], rshift); 
    }
    return result;
}

char decryptOnce(char text, int times){
    times = 0 - times;
    text = unshift(text, times);
    return text;
}

std::string decryptVigenere(std::string plaintext, std::string keyword){
    int cnt=0; std::string result;
    for (int i = 0; i < plaintext.length(); i++){
        if (isalpha(plaintext[i])){
            keyword+=keyword;
            result += decryptOnce(plaintext[i], key(keyword[i-cnt]));
        }
        else{
            result += plaintext[i];
            cnt+=1;
        }
    }
    return result;
}

std::string decryption(std::string plain, std::string key, int shift){
    
    std::cout << "\n= Caesar =\n\nEnter shift" << std::setfill (' ') << std::setw(4) << ": " << shift << std::endl;
    std::cout << "Ciphertext" << std::setfill (' ') << std::setw(5) << ": " << encryptCaesar(plain, shift);
    std::cout << "Decrypted" << std::setfill (' ') << std::setw(6) << ": " << decipher(encryptCaesar(plain, shift), shift) << std::endl;

    std::cout << "\n= Vigenere =\n\nEnter keyword" << std::setfill (' ') << std::setw(2) << ": " << key << std::endl;
    std::cout << "Ciphertext" << std::setfill (' ') << std::setw(5) << ": " << encryptVigenere(plain, key);
    std::cout << "Decrypted" << std::setfill (' ') << std::setw(6) << ": " << decryptVigenere(encryptVigenere(plain,key), key) << std::endl;
    
    return plain;
}
