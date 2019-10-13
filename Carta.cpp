#include "Carta.h"
void Carta::Crear_Carta(int number, int c)
{
	numero_carta = number;
	color_carta = c;
	mostrar = false;
}
System::String^ Carta::Mostrar_Carta()
{
	System::String^ I;
	System::String^ Col;
	if (color_carta == 1)
	{
		Col = "Rojo";
	}
	else
	{
		Col = "Negro";
	}
	I = numero_carta + " " + Col;
	if (mostrar == false)
	{
		I = "---------------" ;
	}
	return I;
}