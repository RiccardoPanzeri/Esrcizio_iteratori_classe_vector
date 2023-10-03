#include "prototipi.h"


void caricaVector(vector <int>& vettore) { //anche in questo caso non posso utilizzare l'aritmetica dei puntatori sul vettore di classe vector, perchè è un oggetto;
	vector<int>::iterator iteratore;//dichiaro un oggetto iteratore;
	for (iteratore = vettore.begin(); iteratore != vettore.end(); iteratore++) {
		*iteratore = rand() % 11;

	}
}

void caricaVettoreC(int vettoreC[], int dim) //in questo caso invece, posso utilizzare l'aritmetica dei puntatori;
{
	for (int i = 0; i < dim; i++) {
		*(vettoreC + i) = rand() % 11;
	}
}

void visualizzaVector(vector<int> vettore) //in questo caso, non serve passare per riferimento, perchè non andrò a modificare il vettore;
{
	vector<int>::iterator iteratore;//dichiaro un oggetto iteratore;
	for (iteratore = vettore.begin(); iteratore != vettore.end(); iteratore++) {
		cout << *iteratore << endl;
	}

}

void visualizzaVettoreC(int vettoreC[], int dim)
{
	for (int i = 0; i < dim; i++) {
		cout << *(vettoreC + i) << endl;
	}
}

void visualizzaPosDispariVector(vector<int> vettore)
{
	int counter = 0; // non posso agire direttamente sull'iteratore come facevo per l'indice. utilizzo un contatore per stabilire le posaizioni dispari;
	vector<int> ::iterator iteratore;
	for (iteratore = vettore.begin(); iteratore != vettore.end(); iteratore++) {
		if (counter % 2 != 0){
			cout << *iteratore << endl;

			}
		counter++;
		}
	}

	void visualizzaPosDispariVettoreC(int vettoreC[], int dim)
	{	
		int contatore = 0;

		for (int i = 0; i < dim; i++) {
			if (contatore % 2 != 0) {
				cout << *(vettoreC + i) << endl;;
			}
			contatore++;
		}

	}

