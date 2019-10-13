#pragma once

class Carta
{
public:
	int numero_carta;
	int color_carta;
	bool mostrar = false;
	int n_veces = 0;
public:
	void Crear_Carta(int color, int numero_de_carta);
public:
	System::String^ Mostrar_Carta();
};

