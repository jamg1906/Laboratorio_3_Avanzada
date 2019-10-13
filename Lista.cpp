#include "Lista.h"

void Lista::Insertar_Nodo(NodoCarta* Cartita)
{
	if (inicio == nullptr) { //Es el primer nodo
		inicio = Cartita;
		fin = Cartita;
		elementos_lista = 1;
	}
	else  //Si no es el primero inserto al final
	{
		fin->next = Cartita;
		fin = Cartita;
		elementos_lista++;
	}
}

void Lista::Eliminar_Nodo(NodoCarta* Cartita)
{
	if (elementos_lista == 0 || elementos_lista == 1)
	{
		System::Windows::Forms::MessageBox::Show("Imposible elimar de la baraja. Ocurrió un error.");
	}
	else
	{
		//if ()
	}
}
