#pragma once
#include <iostream>

int key(char word);
char encryptOnce(char text, int times);
std::string encryptVigenere(std::string plaintext, std::string keyword);