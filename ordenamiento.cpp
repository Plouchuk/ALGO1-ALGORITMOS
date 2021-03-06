#include<iostream>
#include<vector>
#include "ordenamiento.h"
#include<array>
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
        i-- ;
    }
}

//main Insertion
vector <int > insertionSort (vector <int > lista ) { // O (n^2)
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
vector <int > bubbleSort (vector <int > lista ) { // O (n^2)
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
            cout << v[i] << "]" << std::endl;
        } else{
           cout << v[i] << ", ";
        }
    }
}


//Counting Sort
//O(n)
// Ordena de manera Creciente
vector<int> contarCREC(vector<int> &lista){
    vector<int> conteo(150,0); //ELEGIR UNA COTA DE ELEMENTOS (EJ: 150 (del 0 al 149))
    for(int i=0;i<lista.size();i++){//conteo[lista[i]] es el elemento en la posicion lista[i]
        conteo[lista[i]] = conteo[lista[i]]-1;//le bajo 1 en cada aparicion de lista[i]
    }
    return conteo;
}

vector<int> reconstruirCREC(vector<int> &lista, vector<int> conteo){
    vector<int> resultado(lista.size());
    int indice_conteo = 0;
    for(int i=0;i<lista.size();i++){
        while(conteo[indice_conteo]==0){
            indice_conteo++;
        }
        lista[i]=indice_conteo;
        conteo[indice_conteo]++;
    }
    return resultado;
}

void countingSortCREC(vector<int> &items){
    vector<int> conteo = contarCREC(items);
    reconstruirCREC(items,conteo);

}

//Counting Sort
//Ordena de forma Decreciente
//O(n)

vector<int> contarDEC(vector<int> &lista){
    vector<int> conteo(150,0); //vector<int> conteo(COTA+1, 0)
    for(int i=0;i<lista.size();i++){
        conteo[lista[i]]++;
    }
    return conteo;
}

vector<int> reconstruirDEC(vector<int> &lista, vector<int> conteo){
    vector<int> resultado(lista.size());
    int indice_conteo = 149; //COTA = 149, elegir cualquier elemento como m??ximo (del 0 al 149)
    for(int i=0;i<lista.size();i++){
        while(conteo[indice_conteo]==0){
            indice_conteo--;
        }
        lista[i]=indice_conteo;
        conteo[indice_conteo]--;
    }
    return resultado;
}

void countingSortDec(vector<int> &items){
    vector<int> conteo = contarDEC(items);
    reconstruirDEC(items,conteo);

}


int maximo (int a, int b){
    int res;
    if (a > b){
        res = a;
    }
    else {
        res = b;
    }
    return res;
}

int max (vector<int> &v){
    int maxi = v[0];
    for (int i = 0; i <v.size() -1  ; ++i) {
        if (v[i] > v[i+1]){
            maxi = v[i];
        }
        else {maxi = v[i+1];}
    }
    return maxi;
}


// --- COCKTAILSORT
void cocktailSort(vector<int> &s) { // es O (n^2)
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

void cocktailShakerSort(vector<int> &s) { // es O(n^2)
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

void bingoSort(vector<int> &s) { // O( N^2)
    if (s.size() != 0) {
        int i = 0;
        while (i < s.size() - 1) {
            vector<int> minPos = findAllMinPositions(s, i, s.size());
            swapVector(s, i, minPos);
            i = i + minPos.size();
        }
    }
}

vector<int> merge(vector<int> &a, vector<int> &b){
    vector<int> c(a.size()+b.size(),0);
    int i =0;
    int j =0;
    for (int k = 0; k <c.size() ; ++k) {
        if( j>= b.size() || (i<a.size() && a[i] < b[j])){
            c[k] = a[i];
        i++;
        } else{
            c[k] = b[j];
            j++;
        }
    }
    return c;
}

int Partition(vector<int> &v, int start, int end){

    int pivot = end;
    int j = start;
    for(int i=start;i<end;++i){
        if(v[i]<v[pivot]){
            swap(v[i],v[j]);
            ++j;
        }
    }
    swap(v[j],v[pivot]);
    return j;

}

void Quicksort(vector<int> &v, int start, int end ){
    if(start<end){
        int p = Partition(v,start,end);
        Quicksort(v,start,p-1);
        Quicksort(v,p+1,end);
    }
}

int getMax(vector<int> arr, int size) {
    int max = arr[1];
    for(int i = 2; i<=size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

void ordenarC(vector<int> &items){
    int size = items.size()-1;
    int output[size+1];
    int max = getMax(items, size);
    int count[max+1];
    for(int i = 0; i<=max; i++)
        count[i] = 0;
    for(int i = 1; i <=size; i++)
        count[items[i]]++;
    for(int i = 1; i<=max; i++)
        count[i] += count[i-1];
    for(int i = size; i>=1; i--) {
        output[count[items[i]]] = items[i];
        count[items[i]] -= 1;
    }
    for(int i = 1,j=size; i<=size; i++,j--) {

        items[j] = output[i];
    }
}

void counting_sorttt(vector<int> &v, int a, int b) { //U: Vector a ordenar, numero mas chiquito, numero mas grande
    vector<int> count (b - a + 1, 0); //A: Un vector con b - a ceros que cuenta en el rango [a, b]
    for (int i = 0; i < v.size(); ++i) { ++count[v[i] - a];	} //A: Sumo +1 a la posicion correspondiente

    v.clear();
    for (int i = 0; i < count.size(); ++i) { //A: De menor a mayor
        //for (int i = count.size() - 1; 0 <= i; --i) { //A: De mayor a menor
        for (int j = 0; j < count[i]; ++j) { v.push_back(i + a); } //A: Agrego la cantidad correcta de este numero
    }
}

void bucket(vector <int>& arr){
    int n = arr.size();
    int x = 65537; //range is [1,65536]
    int buckets[x];  //Create empty buckets
    for (int i = 0; i < x; i++)  //Initialize all buckets to 0
        buckets[i] = 0;

    //Increment the # of times each element is present in the input
    //array. Insert them in the buckets
    for (int i = 0; i < n; i++)
        buckets[arr[i]]++;

    //Sort using insertion sort and link
    for(int i = 0, j = x; j >= 0; j--)
        for (int k = buckets[j]; k > 0; k--)
            arr[i++] = j;
}
