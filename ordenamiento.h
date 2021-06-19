//
// Created by fedet on 19/6/2021.
//
#include<iostream>
#include<vector>
using namespace std;

#ifndef ALGO_1_ALGOS_ORDENAMIENTO_H
#define ALGO_1_ALGOS_ORDENAMIENTO_H


class ordenamiento {

};

void swap ( vector <int> &lista , int a, int b);
void insertar ( vector <int > &lista , int i);
int findMinPosition(vector<int> &s, int d, int h);
int findMaxPosition(vector<int> &s, int d, int h);
vector <int > insertionSort (vector <int > lista );
void selectionSort(vector<int> &s);
void mostrarVector(const vector<int>& v);
void burbujeo ( vector <int > &lista , int i);
vector <int > bubbleSort (vector <int > lista );
vector <int > reconstruir (vector <int > &lista , vector <int> conteo );
vector <int > contar (vector <int > & lista );
vector <int > countingSort (vector <int > & lista );
void swapVector(vector<int> &s, int i, vector<int> l);
void bingoSort(vector<int> &s);
vector<int> findAllMinPositions(vector<int> s, int d, int h);
void cocktailShakerSort(vector<int> &s);
void cocktailSort(vector<int> &s);
void counting_sort(vector<int> & A);


#endif //ALGO_1_ALGOS_ORDENAMIENTO_H
