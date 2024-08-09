#include <string>
#include <sstream>
#include <bitset>
#include <iostream>

std::string stringToBinary(const std::string& input){
    std::string binaryString;
    std::string bits;
    std::string start = "0";
    std::string stop = "1";
    for (char c : input){
        bits = std::bitset<8>(c).to_string();
        bits.insert(0,start);
        bits += stop;
        binaryString += bits + " ";
    }
    return binaryString;
}

int main(){
    std::string userInput;
    std::cout << "enter some text";
    std::getline(std::cin, userInput);
    std::string binaryOutput = stringToBinary(userInput);
    std::cout << binaryOutput << std::endl;
    return 0;
}