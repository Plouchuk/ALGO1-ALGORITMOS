#include <iostream>
#include "busqueda.h"
#include "ordenamiento.h"
#include <string>
#include "ejercicios.h"
#include<array>
#include <ctime>
using namespace std;

int main() {
    unsigned t0, t1;

    t0=clock();

    vector<int> A = {1,2,6,7,9,3,6,7,18,24};
    vector<int> B = {2,3,1,5,4,8};
    vector<int> C = {6,5,4,3,2,1};
    vector<int> D = {1,1,7,2,2,4,7,3,1,2,18,5,6,4,5,6,12};
    vector<int> E = {2,1,5,4,2,1};
    vector<int> F ;
    vector<int> G ;
    vector<int> H ;
    //cocktailSort(B);
    //cocktailShakerSort(C );
   //mostrarVector(insertionSort(D));
    string c = "abcdefghijklmnopqrstuvwxyz";
    string d = "badcefghijklmnporqtsvuyxzw";
    //selectionSort(A);
   // bingoSort(D);
   // mostrarVector(A);
   // mostrarVector(B);
   // mostrarVector(C);
    //cout << "Jump : " << JumpSearch(A,19) << endl;
    //cout << " es:" << busquedaBin(A,0,A.size(), 178)<< endl;
    cout << "La verdad es:" << busquedaString(c, d) << endl;
    //counting_sort(D);
    //mostrarVector(D);

    //mostrarVector(merge(B,C));
   // mostrarVector(countingSort(D));
    //Quicksort(D,0,D.size()-1);
    //mostrarVector(D);
   // counting_sorttt(D, -1, 19);
    //ordenarC(E);
    //bucket(E);
    //mostrarVector(E);
    vector<int> K = {1,7,27,149,4};
    //countingSortCREC(K);
    countingSortDec(K);
   //mostrarVector(K);
    //cout<< "manaos : "<< algunProductoEsDividido(K,21)<< endl;
   // cout<< "LL :" << busquedaKMP(c ,d)<<endl;
   string h = "gracias";
    //mostrarVector(contarABC(h));
    //cout<< " " << int('n')  <<endl;
    //string jh = "abcdefghijklmnopqrstuvwxyz";
   // cout << " EsPermutacion: " << esPermutacion(c,d) <<endl;
   vector<int> z = {1,2,3,0,0,0};
    mostrarVector(reconstruime(z));
    t1 = clock();


    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
    return 0;
}
