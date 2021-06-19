//
// Created by fedet on 19/6/2021.
//
#include<iostream>
#include<vector>
#include <string>
using namespace std;
#ifndef ALGO_1_ALGOS_BUSQUEDA_H
#define ALGO_1_ALGOS_BUSQUEDA_H


class busqueda {

};

bool JumpSearch(vector<int> v, int e);
bool busquedaBin(vector<int> lista, int desde, int hasta, int e);
bool linearSearch (vector <int > lista , int e);
bool linealEntreIndices(vector<int> v,int desde, int hasta, int elem );
bool binarySearcRec ( vector <int > lista , int desde , int hasta , int k);
int minimo(int a, int b);
int jump_Search(vector<int> v , int item);
bool matches(string &t, string &p, int i);
bool busquedaString(string &t, string &p);

#endif //ALGO_1_ALGOS_BUSQUEDA_H
