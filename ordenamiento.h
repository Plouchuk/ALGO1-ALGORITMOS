//
// Created by fedet on 19/6/2021.
//
#include<iostream>
#include<vector>
#include<array>
using namespace std;

#ifndef ALGO_1_ALGOS_ORDENAMIENTO_H
#define ALGO_1_ALGOS_ORDENAMIENTO_H


class ordenamiento {

};
void mostrarVector(const vector<int>& v);
void swap ( vector <int> &lista , int a, int b);


//Insertion
void insertar ( vector <int > &lista , int i);
vector <int > insertionSort (vector <int > lista );

//Selection
int findMinPosition(vector<int> &s, int d, int h);
void selectionSort(vector<int> &s);

//Bubble
void burbujeo ( vector <int > &lista , int i);
vector <int > bubbleSort (vector <int > lista );

//COUNTING SORT
//CRECIENTE
vector <int > reconstruirCREC (vector <int > &lista , vector <int> conteo );
vector <int > contarCREC (vector <int > & lista );
void countingSortCREC (vector <int > & lista );

//DECRECIENTE
vector<int> contarDEC(vector<int> &lista);
vector<int> reconstruirDEC(vector<int> &lista, vector<int> conteo);
void countingSortDec(vector<int> &items);

//Cocktail Sort, usa la funcion findMinPosition
int findMaxPosition(vector<int> &s, int d, int h);
void cocktailSort(vector<int> &s);

//CocktailShaker Sort, usa la funcion swap
void cocktailShakerSort(vector<int> &s);


//Bingo Sort
void swapVector(vector<int> &s, int i, vector<int> l);
vector<int> findAllMinPositions(vector<int> s, int d, int h);
void bingoSort(vector<int> &s);

//MERGE entre vectores ordenados y los devuelve ordenados
vector<int> merge(vector<int> &a, vector<int> &b);

//Counting sort medio choto
void counting_sort(vector<int> & A);

//Devuelve el maximo entre 2 numeros
int maximo (int a, int b);

//Devuelve el maximo elemento de un vector
int max (vector<int> &v);

//Partition Sort
int Partition(vector<int> &v, int start, int end);

//QuickSort
void Quicksort(vector<int> &v, int start, int end );

//Counting Sort version Laferrere
int getMax(vector<int> arr, int size);
void ordenarC(vector<int> &items);

//Counting Sort con dos parametros COTA
void counting_sorttt(vector<int> &v, int a, int b);


void bucket(vector <int>& arr);


#endif //ALGO_1_ALGOS_ORDENAMIENTO_H
