//
// Created by fedet on 20/6/2021.
//

#include "ejercicios.h"
#include<iostream>
#include<vector>
#include<cmath>
#include <string>

using namespace std;

bool algunProductoEsDividido(vector<int> v, int n) {
int p= encontrarPrimo(n);
int q = n/p;
    return estanLosPrimos(v,p,q);
}

int encontrarPrimo(int n){
    for (int i = 2; i < n ; ++i) {
        if(n % i == 0){
            return i;
        }
    }
}

bool estanLosPrimos(vector<int> v, int p, int q){
    bool estaP = false;
    bool estaQ = false;
    for (int i = 0; i < v.size() && (!estaP || !estaQ) ; ++i) {
        if(v[i] % p == 0){
            estaP = true;
        }
        if(v[i] % q == 0){
            estaQ = true;
        }
    }
    return (estaQ && estaP);
}
/*
 *  ordenar B nos toma n*log(n) memoria y B es n^2
 *
 *
 *
 *
 *
 *
 *
 */