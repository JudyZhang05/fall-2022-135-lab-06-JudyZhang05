#pragma once

char unshift(char c, int rshift);
std::string decipher(std::string plaintext, int rshift);
char decryptOnce(char text, int times);
std::string decryptVigenere(std::string plaintext, std::string keyword);
std::string decryption(std::string plain, std::string key, int shift);