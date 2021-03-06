
#include "busqueda.h"
#include<iostream>
#include<vector>
#include<cmath>
#include <string>

using namespace std;

int minimo(int a, int b);
//Busqueda:
// O(|lista|) = O(n)
bool linearSearch (vector <int > lista , int e);

//Binaria
//O(log_2(|lista|-1)) === O(log_2(n))
bool busquedaBin(vector<int> lista, int desde, int hasta, int e);
//Recursiva
bool binarySearcRec ( vector <int> lista , int desde , int hasta , int e);

//Jump Search
//O(sqrt(|lista|)) === O(sqrt(n))
bool JumpSearch(vector<int> v, int e);



//Busqueda: --------------------------------------------------------------------------------------//
// Lineal: O(|lista|) = O(n)
//int i = 0; while(i < lista.size() && lista[i] != e)
//Pre: True
bool linearSearch (vector <int> lista , int e) {
    bool res = false ;
    for(int i=0; i< lista.size() ;i++) {
        if( lista [i]== e) {
            res = true ;
        }
    }
    return res ;
}
//Para no buscar sobre la lista completa
//Pre: 0 <= desde, hasta <|v|
bool linealEntreIndices(vector<int> v,int desde, int hasta, int elem ) {
    bool res = false;
    int i = desde;
    if (desde == hasta) {
        res = false;
    } else {
        while (i <= hasta && !res) {
            if (v[i] == elem) {
                res = true;
            }
            i++;
        }

        return res;
    }
}

//Binaria
bool busquedaBin(vector<int> lista, int desde, int hasta, int e){
    bool res = false;
    while (desde <= hasta){
        int medio = desde + (hasta-desde)/2;
        if (lista[medio] == e){
            res = true; //encontre el elemento
        }
        if (lista[medio] < e){
            desde = medio + 1; //esta en la mitad derecha
        }else{
            hasta = medio - 1; //esta en la mitad izquierda
        }
    }
    return res;
}


//JumpSearch
//O(sqrt(|s|)) === O(sqrt(n))
//REVISAR*******************************************************//

int minimo(int a, int b){
    int res;
    if(a > b){
        res = b;
    }
    else{
        res = a;
    }
    return res;
}

bool JumpSearch(vector<int> v, int e) {
    bool res = false;
// Finding block size to be jumped
    int paso = sqrt(v.size());
    int prev = 0;
    while (prev < v.size() && !res) {
        if (v[prev] == e) {
            res = true;
        } else if (v[prev] < e && prev+paso < v.size()) {
            res = linealEntreIndices(v, prev, v.size()-1, e);

        } else if(v[prev] > e && prev-paso >= 0){//v[prev] > e busco desde prev hasta prev-sqrt(|v|)
            res = linealEntreIndices(v, prev-paso, prev, e);
        }


        prev = prev + paso;

    }

    return res;
}

// STRINGS BUSQUEDA
//busquedaString, busca si un string esta incluido en otro o son iguales
//Posible O(n^2)
bool matches(string &t, string &p, int i) {
    int k = 0;
    while (k < p.size() && t[i + k] == p[k]) {
        k++;
    }
    return k == p.size();
}
//Pre: |t| >= |p|
bool busquedaString(string &t, string &p) {
    bool res = false;
    if (t.size() != 0) {
        for (int i = 0; i <= t.size() - p.size(); i++) {
            if (matches(t, p, i)) {
                res = true;
            }
        }
    }
    return res;
}
//The welfare Crook
//O(n)
void crook(vector<int> &a,vector<int> &b, vector<int> &c, int &i, int &j, int &k){
    i =0, j =0, k=0;
    while (a[i] != b[j] || b[j] != c[k]){
        if( a[i] < b[j]){
            i++;
        }
        else if(b[j] < c[k]){
            j++;
        } else {
            k++;
        }
    }
}

vector<int> calcularPi(string &p) {
    vector<int> pi(p.size());
    int i = 0;
    for (int j = 1; j < p.size(); j++) {
        while (i > 0 && p[i] != p[j]) {
            i = pi[i - 1];
        }
        if (p[i] == p[j]){
            i++;
        }
        pi[j] = i;
    }
    return pi;
}

bool busquedaKMP(string &t, string &p) {
    vector<int> pi = calcularPi(p);
    int l = 0;
    int r = 0;
    while (r < t.size() && r - l < p.size()) {
        if (t[r] == p[r - l]) {
            r++;
        } else if ( l == r) {
            r++;
            l++;
        } else {
            l = r - pi[r - l];
        }
    }
    return r - l == p.size();
}