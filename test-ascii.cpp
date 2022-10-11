#include <iostream>

//TASK A

std::string testascii(std::string input){
    for (int i = 0; i < input.length(); i++){
        char letters = input[i];
        std::cout << input[i] << ' ' << (int)letters << std::endl;
    }
    return input;
}

int main(){
    std::cout << "_______Task A_______\n" << std::endl;
    testascii("Cat :3 Dog");
    std::cout << "\n";
}