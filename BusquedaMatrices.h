//
// Created by Edu on 21/6/2021.
//
#include<iostream>
#include<vector>
#include <string>
using namespace  std;
#ifndef ALGO_1_ALGOS_BUSQUEDAMATRICES_H
#define ALGO_1_ALGOS_BUSQUEDAMATRICES_H

class BusquedaMatrices{

};

void mostrarMatriz(vector<vector<int>> m);
void mostrarCoordenada(pair<int,int> coord);
bool estaLinealMatriz(vector<vector<int>> mat, int elem);
pair<int,int> EncontrarIndiceDelElem(vector<vector<int>> m, int elem);


bool BuscarEnZooms(vector<vector<int>> &M, int elem, int &fi, int &co);

#endif //ALGO_1_ALGOS_BUSQUEDAMATRICES_H
