#pragma once
#include "NodoCarta.h"
#include "Carta.h"
class Lista
{
public:
	NodoCarta* inicio;
public:
	NodoCarta* fin;
	int elementos_lista = 0;
public:
	void Insertar_Nodo(NodoCarta* nuevo);
	void Eliminar_Nodo(NodoCarta* eliminado);


};

