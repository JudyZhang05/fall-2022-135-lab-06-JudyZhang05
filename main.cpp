#include <iostream>

#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"
//#include "funcs.h"

int main()
{
  
/*
  std::cout << "_______Task A_______\n" << std::endl;
  testascii("Cat :3 Dog");
  std::cout << "\n";
*/

  std::cout << "_______Task B_______\n" << std::endl;
  std::cout << encryptCaesar("Hello, World!", 10);
  std::cout << "\n";

  std::cout << "_______Task C_______\n" << std::endl;
  std::cout << encryptVigenere("Hello, World!", "cake");
  std::cout << "\n";

  std::cout << "_______Task D_______" << std::endl;
  decryption("Hello, World!", "cake", 10);

  return 0;
}
