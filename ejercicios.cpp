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
 // DEVUELVE 1 SI ESTA EL ELEMENTO O 0 SI NO ESTA, ES O (n+m) y es para una matriz ordenada en las filas de mayor a menor y las columnas de mayor a menor

int aparicionesSinRepetidos(vector<vector<int>> m, int e) {
    int i = 0;
    int j = m[0].size()-1;
    while (j>=0 && i<m.size() && m[i][j]!=e){
        if (m[i][j]>e){
            j--;
        }
        else {
            i++;
        }
    }
    if(j>=0 && i<m.size()){
        return 1;
    } else{
        return 0;
    }
}


//Agarro sol y me devuelve {l1,o1,s1}
string cuantasDeCadaLetra (string s){
   vector<int> abc = contarABC(s);
   string abecedario = "abcdefghijklmnopqrstuvwxyz";
   string res ;
   for(int i = 0; i < abecedario.size(); i++){
       if(abc[i] != 0){
           res = res + abecedario[i] + to_string(abc[i]);
       }
   }
    return res;
}



vector<int> contarABC(string  p){
    vector<int> abc(26,0); //cota
    for(int i=0;i<p.size();i++){//conteo[lista[i]] es el elemento en la posicion lista[i]
        abc[int(p[i]) - int('a')]  ++ ;//le sumo 1 en cada aparicion de lista[i]
        }
    return abc;
}

bool esPermutacion(string v, string s){
    if(v.size() != s.size()){
        return false;
    }
    vector<int>  abcd (26,0);
    int idx;
    for(int i =0; i<v.size(); i++){
        idx = int(v[i]) - int('a'); // NORMALIZAMOS el ord de v[i] al restarle a
        abcd[idx] ++;
        idx = int (s[i]) - int('a');
        abcd[idx] --;
    }
    bool res = true;
    int k =0;
    while( res == true && k < v.size()){
        if(abcd[k] != 0 ){
            res = false;
        }
    k ++;
    }
    return res;
}

// Esto es O(n *2) == O(n)
vector<int> reconstruime(vector<int> a){ // a = (1,2,3,0,0,0) y b = (0,1,1,2,2,2)
   vector<int> b;
    for (int i = 0; i < a.size(); ++i) {
        for (int k = 0; k < a[i]; ++k) {
            b.push_back(i);
        }
    }
    return b;
}
    /*vector<int> b;
    for(int i = 0; i < aparis.size(); i++ ){
        for (int j = 0; j <aparis[i] ; ++j) {
            b.push_back(i);
        }
    }
    return b;
}*/



/*p q p o  vector<string>  pa  [i,j] [i+1,j+1] [i+2, j+2]
d s t h
f a t l
p e a o


/*
 *  i = 0 (1,2,3,a)
 *  i = 1 (4,5,7,a)
 *  i = 2 (8,9,10,a)   e == 6
 *  i = 3 (b, c, d, e)
 *  6 = n + m
 */



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