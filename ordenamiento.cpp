#include<iostream>
#include<vector>
#include "ordenamiento.h"
using namespace std;


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
int findMinPosition(vector<int> &s, int d, int h) {
    int min = d;
    for (int i = d + 1; i < h; i++) {
        if (s[i] <= s[min]) {
            min = i;
        }
    }
    return min;
}
int findMaxPosition(vector<int> &s, int d, int h) {
    int max = d;
    for (int i = d + 1; i < h; i++) {
        if (s[i] >= s[max]) {
            max = i;
        }
    }
    return max;
}

//main Selection
void selectionSort(vector<int> &s) {
    if (s.size() != 0) {
        for (int i = 0; i < s.size() - 1; i++) {
            int minPos = findMinPosition(s, i, s.size());
            swap(s, i, minPos);
        }
    }
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

void mostrarVector(const vector<int>& v){
    cout << "[";
    for (int i = 0; i < v.size(); i++){
        if (i == v.size() - 1){
            std::cout << v[i] << "]" << std::endl;
        } else{
            std::cout << v[i] << ", ";
        }
    }
}


vector <int > countingSort (vector <int > & lista ) {
    vector <int > conteo = contar ( lista ) ;
    return reconstruir (lista , conteo ) ;
}

vector <int > contar (vector <int > & lista ) {
// creo un vector inicializado en 0
// cuya longitud sea igual a una cota m�a xima
    int COTA;
    vector<int> conteo(COTA, 0);
    for (int i = 0; i < lista.size(); i++) {
        conteo[lista[i]]++;
    }
}

vector<int> reconstruir(vector<int> &lista, vector<int> conteo) {
    vector<int> resultado(lista.size(), 0);//0 ?
    int indice_conteo = 0;
    for (int i = 0; i < lista.size(); i++) {
        // Ignoro valores nulos
        while (conteo[indice_conteo] == 0) {
            indice_conteo++;

        }

        lista[i] = indice_conteo;
        conteo[indice_conteo]--;
    }
//Incompleto
    return lista;
}


// --- COCKTAILSORT
void cocktailSort(vector<int> &s) {
    if (s.size() != 0) {
        for (int i = 0; i < (s.size() - 1) / 2; i++) {
            int minPos = findMinPosition(s, i, s.size());
            int maxPos = findMaxPosition(s, i, s.size() - i);
            if (maxPos != i) {
                swap(s, i, minPos);
                swap(s, s.size() - 1 - i, maxPos);
            } else {

            }
        }
    }
}

void cocktailShakerSort(vector<int> &s) {
    if (s.size() != 0){
        int i = 0;
        int j = 0;
        while (i < s.size() - 1) {
            j = 0;
            while (j < s.size() / 2) {
                if (s[j] > s[j + 1]) {
                    swap(s, j, j + 1);
                }
                if (s[s.size() - j - 1] < s[s.size() - j - 2]) {
                    swap(s, s.size() - j - 1, s.size() - j - 2);
                }
                j++;
            }
            i++;
        }
    }
}

vector<int> findAllMinPositions(vector<int> s, int d, int h) {
    vector<int> min;
    min.push_back(d);
    for (int i = d + 1; i < h; i++) {
        if (s[i] < s[min[0]]) {
            min.clear();
            min.push_back(i);
        } else if (s[i] == s[min[0]]) {
            min.push_back(i);
        }
    }
    return min;
}

void swapVector(vector<int> &s, int i, vector<int> l) {
    for (int j = 0; j < l.size(); j++) {
        swap(s, i + j, l[j]);
    }
}

void bingoSort(vector<int> &s) {
    if (s.size() != 0) {
        int i = 0;
        while (i < s.size() - 1) {
            vector<int> minPos = findAllMinPositions(s, i, s.size());
            swapVector(s, i, minPos);
            i = i + minPos.size();
        }
    }
}

