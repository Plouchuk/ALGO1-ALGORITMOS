
#include "busqueda.h"
#include<iostream>
#include<vector>
#include<cmath>

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



int main(){

    return 0;
}

//B�squeda: --------------------------------------------------------------------------------------//
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
bool linealEntreIndices(vector<int> v,int desde, int hasta, int elem ){
    bool res = false;
    int i = desde;
    while(i <= hasta && !res){
        if(v[i] == elem){
            res = true;
        }
        i++;
    }

    return res;
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

//Binaria Recursiva:
bool binarySearcRec ( vector <int > lista , int desde , int hasta , int k) {
    if ( hasta >= desde ) {
        int medio = desde + ( hasta - desde ) /2;
        if ( lista [ medio ] == k) { // encontre el
            elemento
            return true ;
        }
        if ( lista [ medio ] > k) { // esta en la mitad
            izquierda
            return binarySearch (lista , desde , medio -1 ,k) ;
        }
// esta en la mitad derecha
        return binarySearch (lista , medio +1 , r, k) ;
    }
// no esta
    return false ;
}

//JumpSearch
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
        } else if (v[prev] < e) {
            prev = prev + paso;
        } else {//v[prev] > e busco desde prev hasta prev-sqrt(|v|)

            res = linealEntreIndices(v, prev - minimo(sqrt(v.size()), prev), prev, e);
        }

    }

    return res;
}


