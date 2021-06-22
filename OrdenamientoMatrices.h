//
// Created by Edu on 21/6/2021.
//

#ifndef ALGO_1_ALGOS_ORDENAMIENTOMATRICES_H
#define ALGO_1_ALGOS_ORDENAMIENTOMATRICES_H
#include<iostream>
#include<vector>
#include<string>

using namespace  std;

class OrdenamientoMatrices {

};
void swapMat(vector<vector<int>> &m, pair<int,int> cd, pair<int,int> ch);
pair<int,int> BuscarCoordMinElemEnMat(vector<vector<int>> m,pair<int,int> cIni,pair<int,int> cFin);
void OrdenarMatriz(vector<vector<int>> &m);

#endif //ALGO_1_ALGOS_ORDENAMIENTOMATRICES_H
