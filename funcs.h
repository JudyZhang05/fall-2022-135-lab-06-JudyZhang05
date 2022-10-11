#pragma once
#include <iostream>

// add prototypes here

std::string testascii(std::string input);

char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);

int key(char word);
char encryptOnce(char text, int times);
std::string encryptVigenere(std::string plaintext, std::string keyword);

char unshift(char c, int rshift);
std::string decipher(std::string plaintext, int rshift);
char decryptOnce(char text, int times);
std::string decryptVigenere(std::string plaintext, std::string keyword);
std::string decryption(std::string plain, std::string key, int shift);