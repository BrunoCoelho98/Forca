#include <iostream>
#include <map>
#include <vector>
#include "letra_existe.hpp"

extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void chuta(){
    std::cout << "Seu chute: " << std::endl;
    char chute;
    std::cin >> chute;
    chutou[chute] = true;

    if(letra_existe(chute)){
        std::cout << "Voce acertou, a palavra contem a letra " << chute <<  std::endl;
    }
    else{
        std::cout << "Voce errou, a palavra nao contem a letra " << chute <<  std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}