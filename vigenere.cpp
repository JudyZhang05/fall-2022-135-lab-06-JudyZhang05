#include <iostream>
#include <cctype>
#include "vigenere.h"
#include "caeser.h"

//Task C

int key(char word){
    int result = 97;
    result -= word;
    return result;
}

char encryptOnce(char text, int times){
    times = 0 - times;
    text = shiftChar(text, times);
    return text;
}

std::string encryptVigenere(std::string plaintext, std::string keyword){
    int cnt=0; std::string result;
    for (int i = 0; i < plaintext.length(); i++){
        if (isalpha(plaintext[i])){
            keyword+=keyword;
            result += encryptOnce(plaintext[i], key(keyword[i-cnt]));
        }
        else{
            result += plaintext[i];
            cnt+=1;
        }
    }
    result += "\n";
    return result;
}