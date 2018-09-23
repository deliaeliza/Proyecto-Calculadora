#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "convertirPostFija.h"
#include "calcularPostFija.h"

class Calculadora {
public:
	Calculadora();
	~Calculadora();
	bool esValida(std::string);
	static bool esOperador(char);
	static void removerEspacios(std::string&);
private: 
	unsigned int esValida(unsigned int, std::string);
		
};

#endif // !CALCULADORA
