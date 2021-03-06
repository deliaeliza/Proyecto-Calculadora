#ifndef PILA_H
#define PILA_H

#include <iostream>
#include <string>

template <class T>
class Pila {
public:
	Pila();
	~Pila();
	void push(const T);
	T pop();
	T peek();
	bool estaVacia();
private:
	template <class T>
	struct Nodo {
		T elemento;
		struct Nodo<T>* next;
	};
	struct Nodo<T>* top;
};

template <class T>
Pila<T>::Pila() {
	top = nullptr;
}

template <class T>
Pila<T>::~Pila() {
}

template <class T>
void Pila<T>::push(const T item) {
	Nodo<T>* nuevo;
	try {
		nuevo = new Nodo<T>();
	}
	catch (std::bad_alloc exception) {
		return;
	}
	nuevo->elemento = item;
	nuevo->next = top;
	top = nuevo;
}

template <class T>
T Pila<T>::pop() {
	T valor;
	Nodo<T>* tmp;
	valor = top->elemento;
	tmp = top;
	top = top->next;
	delete tmp;
	tmp = nullptr;
	return valor;
}

template <class T>
T Pila<T>::peek() {
	return top->elemento;
}

template <class T>
bool Pila<T>::estaVacia() {
	return (top == nullptr);
}


#endif
