#pragma once
#include <iostream>
#include <string>

class Personagem {
public:
	std::string nome;
	int vida;
	int ataque;
	
	Personagem(std::string n, int v, int a)
		: nome(n), vida(v), ataque(a) {}
		void apresentar(){
			std::cout << "personagem: " << nome << std::endl;
			std::cout << "vida: " << vida << std::endl;
			std::cout << "ataque: " << ataque << std::endl;
		}
    
};
