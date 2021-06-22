//
// Created by Edu on 21/6/2021.
//

#include "OrdenamientoMatrices.h"
#include<iostream>
#include<vector>
using namespace std;
//Pre: |m|>0 && |m[0]| > 0 && (0,0) <= cIni, cFin < (|m|,|m[0]|)

void swapMat(vector<vector<int>> &m, pair<int,int> cd, pair<int,int> ch){
    int aux = m[cd.first][cd.second];
    m[cd.first][cd.second] = m[ch.first][ch.second];
    m[ch.first][ch.second] = aux;
}

pair<int,int> BuscarCoordMinElemEnMat(vector<vector<int>> m, pair<int,int> cIni, pair<int,int> cFin){
    pair<int,int> cML; //coordenada Minimo Local
    cML = make_pair(cIni.first,cIni.second);
    for(int f = cIni.first;f <= cFin.first; f++){//(1,0) (2,2)
        for(int c = cFin.second;c <= cFin.second; c++){
            if(m[cML.first][cML.second] > m[f][c]){
                cML = {f,c};
            }
        }
    }
    return cML;
}
//OrdenarPorElementos por metodo Selection por cantidad de elementos
void OrdenarMatriz(vector<vector<int>> &m){
    pair<int,int> cMin;
    for(int f = 0;f < m.size(); f++){
        for(int c = 0; c < m[0].size(); c++){
            cMin = BuscarCoordMinElemEnMat(m,{f,c},{m.size()-1, m[0].size()-1});
            swapMat(m,{f,c},cMin);
        }
    }
}

/*******************************************************************************************/

//Algoritmos sobre matrices



