#include <vector>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

//funzione che mi permette di caricare un vettore istanziato dalla classe vector, di tipo intero;
void caricaVector(vector <int> &vettore);

//funzione che mi permette di caricare un vettore classico, non istanziato dalla classe vector, utilizzando l'aritmetica dei vettori;
void caricaVettoreC(int vettoreC[], int dim);

//funzione che mi permette di visualizzare un vettore istanziato dalla classe vector, di tipo intero;
void visualizzaVector(vector <int> vettore);

//funzione che mi permette di visualizzare un vettore classico, non istanziato dalla classe vector, utilizzando l'aritmetica dei vettori;
void visualizzaVettoreC(int vettoreC[], int dim);

//funzione che mi permette di visualizzare i valori in posizione dispari di un vettore istanziato dalla classe vector, di tipo intero;
void visualizzaPosDispariVector(vector <int> vettore);

//funzione che mi permette di visualizzare i valori nelle posizioni dispari di un vettore classico, non istanziato dalla classe vector, utilizzando l'aritmetica dei vettori;
void visualizzaPosDispariVettoreC(int vettoreC[], int dim);

