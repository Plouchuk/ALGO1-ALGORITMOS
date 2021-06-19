
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


//Ordenamiento:
//en todos se usa swap
void swap ( vector <int > &lista , int i, int j);
//-----------------------------------------------//
//Insertion Sort
//O(n^2)
vector <int> insertionSort (vector <int > lista );
void insertar ( vector <int > &lista , int i);
//Bubble Sort
//O(n^2)
void burbujeo ( vector <int > &lista , int i);
vector<int> bubbleSort (vector<int> lista );

//Counting Sort
//O(n)


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



//Ordenamiento: ----------------------------------------------------------------------------------//
//Pre: 0 <= a, b < |lista|
void swap ( vector <int> &lista , int a, int b) {
    int aux= lista [a];
    lista [a]= lista [b];
    lista [b]=aux;
}

//Insertion Sort
void insertar ( vector <int > &lista , int i) {
    while (i > 0 && lista [i] < lista [i -1]) {
        swap (lista ,i,i -1) ;
        i - -;
    }
}

//main Insertion
vector <int > insertionSort (vector <int > lista ) {
    for(int i=0; i < lista . size () ; i++) {
        insertar (lista ,i) ;
    }
    return lista ;
}
//--------------------------------------------------//
//Selection Sort
//O(n^2)
void seleccionarMinimo ( vector <int > &lista , int i) {
    int posMinimo = i;
    for(int j=i; j< lista . size () ; j++) {
        if( lista [ posMinimo ] > lista [j]) {
            posMinimo = j;
        }
    }
    swap (lista ,i, posMinimo ) ;
}

//main Selection
vector <int > selectionSort (vector <int > lista ) {
    for(int i=0; i< lista . size () ; i++) {

        seleccionarMinimo (lista ,i) ;

    }
    return lista ;
}
//------------------------------------------------//

//Bubble Sort
void burbujeo ( vector <int > &lista , int i) {
    for(int j= lista . size () -1; j > i; j --) {
        if( lista [j] < lista [j -1]) {
            swap (lista , j, j -1) ;
        }
    }
}
//main Bubble
vector <int > bubbleSort (vector <int > lista ) {
    for(int i=0; i< lista . size () ; i++) {
        burbujeo (lista ,i) ;

    }
    return lista ;
}

//--------------------------------------------------//

//Counting Sort

vector <int > contar (vector <int > & lista ) {
// creo un vector inicializado en 0
// cuya longitud sea igual a una cota m�a xima
    vector <int > conteo (COTA ,0) ;
    for(int i=0;i< lista . size () ;i++) {
        conteo [ lista [i ]]++;
    }

    vector <int > reconstruir (vector <int > &lista , vector <int> conteo ) {
        vector <int> resultado ( lista.size(), 0) ;//0 ?
        int indice_conteo = 0;
        for(int i = 0; i< lista . size () ; i++) {
            // Ignoro valores nulos
            while ( conteo [ indice_conteo ]==0) {
                indice_conteo ++;

            }

            lista [i] = indice_conteo ;
            conteo[indice_conteo] --;
        }
//Incompleto

    }
    vector <int > countingSort (vector <int > & lista ) {
        vector <int > conteo = contar ( lista ) ;
        return reconstruir (lista , conteo ) ;
    }

