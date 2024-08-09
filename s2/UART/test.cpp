#include <string>
#include <sstream>
#include <bitset>
#include <iostream>

std::vector<uint8_t> stringToBinary(const std::string& input){
    std::vector<uint8_t> binaryData;
    std::string bits;
    for (char c : input){
        std::bitset<8> bits(c);//.to_string();
        binaryData.push_back(static_cast<uint8_t>(bits.to_ulong()));
    }
    return binaryData;
}

int main(){

    // simulating the data bus via user input text
    
    std::string userInput;
    std::cout << "enter some text";
    std::getline(std::cin, userInput);
    std::vector<uint8_t> binaryData = stringToBinary(userInput);
    
    for (uint8_t byte : binaryData){
        std::cout << std::bitset<8>(byte) << " ";
    }
    std::cout << "" << std::endl;
    return 0;
}