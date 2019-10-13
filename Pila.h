#pragma once
#include "NodoCarta.h"
#include "Carta.h"
class Pila
{
private:
	NodoCarta* Head = nullptr;
public:
	int Elementos_en_la_pila = 0;
public:
	void Apilar(Carta Cartita); // Recibe carta para ingresar a la pila
public:
	Carta Desapilar(); //Sacar carta de la pila
public:
	Carta ObtenerCima(); //Obtener Carta en la cima sin sacarla
	System::String^ ObtenerPila(Pila *baraja);
public:
	Pila();
	~Pila();
};

