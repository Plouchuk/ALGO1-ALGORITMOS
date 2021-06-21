//
// Created by Edu on 21/6/2021.
//

#include "busqueda.h"
#include<iostream>
#include<vector>
#include "BusquedaMatrices.h"
#include<cmath>
#include <string>

using namespace  std;

void mostrarCoordenada(pair<int,int> coord){
    cout<< "(c_0: "<< coord.first <<", c_1: "<<coord.second<< ")"<<endl;
}
void mostrarMatriz(vector<vector<int>> m){
    cout<<"\n";
    cout << "[";
    for(int f = 0;f < m.size(); f++){
        if(f > 0 && f < m.size()){
            cout<<" ";
        }
        cout<<"{ ";
        for(int c = 0; c < m[0].size(); c++){
            cout<<m[f][c];
            if( c != m[0].size()-1){
                cout<<", ";
            }
        }
        cout<<" }";
        if(f != m.size()-1){
            cout<<"\n";
        }
    }

    cout<<"]"<<endl;
}

//BusquedaLineal
//O(|mat|*|mat[0]|)= O(n^2)
//Pre: |MAT|>0 &&(paraTodo f :Z)(0 <= f <|Mat|  --> |MAT[f]| = |MAT[0]|)
bool estaLinealMatriz(vector<vector<int>> mat, int elem){//mat.size()=n && mat[0].size() = m
    bool res = false;
    for(int f = 0; f < mat.size() && !res; f++){ //1 + 3 + n(t(n)+3+1) == 4+n((8+13m)+4)
        for(int c = 0; c < mat[0].size() && !res; c++){//1+7+m(4+9) == 8 +m(13)
            if(mat[f][c] == elem){
                res = true;
            }

        }//4+8n+13mn+4n = O(|mat|*|mat[0]|)= O(n^2)
    }

    return res;

}
//Busqueda lineal de indice del elem (su Primer Aparicion)
//O()
pair<int,int> EncontrarIndiceDelElem(vector<vector<int>> m, int elem){
    bool loEncontre = false;
    pair <int,int> coord = {-1,-1};
    for(int f = 0; f < m.size() && !loEncontre; f++){
        for(int c = 0; c < (m[0]).size() && !loEncontre; c++){
            if(m[f][c] == elem){
                loEncontre = true;
                coord = make_pair(f,c);
            }
        }
    }
    return coord;
}

//Busqueda Binaria en Matrices (Ordenadas)

//Jump Search en Matrices
