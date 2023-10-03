#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "prototipi.h"

using namespace std;

int main() {
	const int dim = 10;
	srand(time(0));

	vector <int> vettore; //creo un vettore dinamico, con dimensione non specificata;
	vettore.resize(10); // gli assegno una dimensione con resize(), per dimostrare che è effettivamente dinamico;
	int vettoreC[dim];//creo un'array classico con dimensione fissa;

	//carico entrambi gli array con le rispettive funzioni:
	caricaVector(vettore);
	caricaVettoreC(vettoreC, dim);
	
	//visualizzo il contenuto di entrambi:
	cout << "Contenuto del vettore istanziato dalla classe vector: " << endl;
	visualizzaVector(vettore);
	cout << endl << endl << "Contenuto del vettore non dinamico: " << endl;
	visualizzaVettoreC(vettoreC, dim);
	
	//stampo solo i valori in posizione dispari di entrambi i vettori:
	cout <<endl<<endl<< "Valori in posizione dispari dell'array dinamico: " << endl;
	visualizzaPosDispariVector(vettore);
	cout << endl << endl << "Valori in posizione dispari dell'array non dinamico: " << endl;
	visualizzaPosDispariVettoreC(vettoreC, dim);




	return 0;
}
