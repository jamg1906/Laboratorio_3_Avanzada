#include "Pila.h"

Pila::Pila()
{
	Elementos_en_la_pila = 0;
}

Pila::~Pila()
{
}

void Pila::Apilar(Carta Cartita) {
	NodoCarta* Card = new NodoCarta();
	Card->Cartita = Cartita;// asignar la carta al nodo
	if (Head == nullptr)
	{
		Head = Card;
	}
	else
	{
		NodoCarta* Aux = new NodoCarta();
		Aux = Head; //Guardamos el que era la cima anterior, que sera el siguiente.
		Head = Card; // la cima es el nuevo nodo
		Head->next = Aux; //Hacemos que auxiliar sea el siguiente nodo
	}
	Elementos_en_la_pila++; // Aumentamos manualmente la cantidad de elementos para llevar control
}
Carta Pila::Desapilar() {
	if (Head == nullptr)
	{
		return *new Carta();
	}
	else
	{

		Carta Cartita = Head->Cartita;
		Head = Head->next;
		Elementos_en_la_pila--;
		return Cartita;
	}
}
Carta Pila::ObtenerCima() {
	if (Head == nullptr)
	{
		return *new Carta;
	}
	else
	{
		Head->Cartita.mostrar = true;
		return Head->Cartita;
	}
}
System::String^ Pila::ObtenerPila(Pila *baraja)
{
	int n = baraja->Elementos_en_la_pila;
	System::String^ pila_m = "";
	Pila* aux_1 = new Pila();
	for (int i = 0; i < n; i++)
	{
		Carta T = baraja->Desapilar();
		aux_1->Apilar(T);
	}
	for (int i = 0; i < n; i++)
	{
		Carta Temp = aux_1->Desapilar();
		baraja->Apilar(Temp);
		pila_m += "\n" + Temp.Mostrar_Carta();
	}
	//System::Windows::Forms::MessageBox::Show(pila_m);
	return pila_m;
}