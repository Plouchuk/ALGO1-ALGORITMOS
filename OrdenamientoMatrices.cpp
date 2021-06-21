//
// Created by Edu on 21/6/2021.
//

#include "OrdenamientoMatrices.h"
#include<iostream>
#include<vector>
using namespace std;
//Pre: |m|>0 && |m[0]| > 0 && 0 <= af <|m| && 0 <= bc <= |m[0]| af y bc a partir de una fila af y hasta una columna bc (bc Exclusive)
pair<int,int> BuscarCoordMinElemEnMat(vector<vector<int>> m, int af, int bc){
    pair<int,int> cML; //coordenada Minimo Local
    cML = make_pair(0,0);
    for(int f = af;f < m.size(); f++){
        for(int c = 1;c < bc; c++){
            if(m[cML.first][cML.second] > m[f][c]){
                cML = {f,c};
            }
        }
    }
    return cML;
}
//OrdenarPorElementos por metodo Selection
void OrdenarMatriz(vector<vector<int>> &m){
    pair<int,int> cd;
    for(int f = 0;f < m.size(); f++){
        for(int c = 0; c < m[0].size(); c++){

        }
    }
}

