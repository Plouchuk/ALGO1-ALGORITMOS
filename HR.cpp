//
// Created by Lucho on 19/6/2021.
//

#include <iostream>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 1 ///////////////////////
/////////////////////////////////////////////////////////////

// Ejercicio 5 Labo01:
/*
5)
a)

int buscarNesimoFibonacci(int n){
    if (n == 0 || n == 1) {
        return n;
    }else {
        return buscarNesimoFibonacci(n-1) + buscarNesimoFibonacci(n-2);
    }
}

int main() {
    int n;
    std:: cout << "Ingrese un numero no negativo: " << std :: endl;
    std:: cin >> n;
    if (n<0){
        std::cout << "Error" << std::endl;
    } else {
        std:: cout << "El termino "<<n<<"-esimo de fibonacci es: "<<buscarNesimoFibonacci(n) << std::endl;
    }
}

b)
int buscarNesimoFibonacciNR(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int f1=1;
    int f2=0;
    int fn=0;
    for(int i=2;i<=n;i++)
    {
        fn=f2+f1;
        f2=f1;
        f1=fn;
    }
    return fn;
}

int main() {
    int n;
    std:: cout << "Ingrese un numero no negativo: " << std :: endl;
    std:: cin >> n;
    if (n<0){
        std::cout << "Error" << std::endl;
    } else {
        std:: cout << "El termino "<<n<<"-esimo de fibonacci es: "<<buscarNesimoFibonacciNR(n) << std::endl;
    }
}
*/

/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 2 ///////////////////////
/////////////////////////////////////////////////////////////
/*
7)
void swap(int& a, int& b){
    int aCero = a;
    int bCero = b;
    a = bCero;
    b = aCero;
}


int main(){
    int a;
    int b;
    std::cout<<"Escriba dos numeros para ser intercambiados:"<<std::endl;
    std::cin>> a;
    std::cin>> b;
    swap(a,b);
    std::cout<< "Primer numero: "<<a<<"\nSegundo numero: "<<b<<std::endl;
    return 0;
}

9)


float division(int dividendo, int divisor){
    int cociente = dividendo/divisor;
    int resto = dividendo % divisor;
    if (dividendo >= 0 && divisor > 0 && resto >=0 && resto < divisor) {
        dividendo = divisor * cociente + resto;
    } else {
        std::cout<<"Error"<<std::endl;
    }
    std::cout<<"El cociente es: "<<cociente<<"\nEl resto es: "<<resto<<std::endl;
}


int main(){
    int dividendo;
    int divisor;
    std::cout<<"Ingresar el dividendo y luego el divisor:"<<std::endl;
    std::cin >> dividendo;
    std::cin >> divisor;
    division(dividendo,divisor);
}

//El que puse en el hackerrank, sin usar % ni /:
void division(int dividendo, int divisor, int &cociente, int &resto){
    int numeroADividir = dividendo;
    int contador;
    while (numeroADividir > divisor){
        numeroADividir = numeroADividir - divisor;
        contador++;
    }
    cociente = contador;
    resto = numeroADividir;
}


using namespace std;
int main() {
    // No hace falta modificar el main
    //Leo la entrada
    int divisor,dividendo,cociente,resto;
    cin >> dividendo>>divisor;

    //Calculo la division
    division(dividendo, divisor,cociente,resto);
    cout<<cociente<<" "<<resto<<endl;
    return 0;
}

*/

///////// Falta rotar y estaOrdenado, no lo encuentro ///////////


/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 3 ///////////////////////
/////////////////////////////////////////////////////////////

/************* Ejercicio 6 *************/
/*
// Encontrar el maximo comun divisor de dos numeros
int maximo(int x, int y){
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    if(x>y)
        return x;
    else
        return y;
}

int minimo(int x, int y){
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    if(x<y)
        return x;
    else
        return y;
}

int maximoComunDivisor(int x, int y){
    int a = maximo(x,y);
    int b = minimo(x,y);
    int r = b;
    int resto;
    while((b!=0) && (b!=1)) {
        resto = a % b;
        b = r;
        r = resto;
    }
    if(a==0)
        return a;
    else
        return 1;
}

*/
///////
/*
// Ejercicio 1

bool existePico(vector<int> v){
    bool res = true;
    if (v.size() > 2) {
        for(int i = 1; i <= v.size()-2; i++){
            if(v[i-1]<v[i] && v[i+1]< v[i]) {
                return res;
            }
        }
    }
    else{
        return !res;
    }
}


1)
bool existePico(vector<int> v){
    bool res = false;
    if (v.size() > 2) {
        for(int i = 1; i <= v.size()-2; i++){
            if (res == false) {
                if (v[i - 1] < v[i] && v[i + 1] < v[i]) {
                    return !res;
                }
            }
        }
    }
    else{
        return res;
    }
}





//bool existePico(vector<int> v){
//    bool res = true;
//    int i = 1;
//    while(i < v.size()-1){
//        if(v[i] <= v[i-1] && v[i] <= v[i+1]){
//            res = false;  //res = res || true;
//        }
//        i++;
//    }
//    return res;
//}

// Ejercicio 3
int indiceMinSubsec(vector<int> s,int l , int r){
    int min = r;
    int i = r;
    while(i > l-1){
        if(s[min] > s[i]){
            min =  i;
        }
        i--;
    }
    return min;
}

// Ejercicio 4
void leerVector(vector<int> v){
    cout<<"[";
    int i = 0;
    while(i < v.size()){
        cout << v[i];
        if(i != v.size()-1) {
            cout << ", ";
        }
        i++;
    }
    cout<<" ]"<<endl;
}

//Pre: 0 <= a,b < |v|
void swapPos(int a, int b, vector<int>& v){
    int aux;
    aux = v[a];
    v[a] = v[b];
    v[b] = aux;

}

//Pre = {s = S0 && |s| > 0} Ordenar ascendentemente
void Ordenar1(vector<int> &s){
    int minLocal;
    int i = 0;
    while(i < s.size()){
        minLocal = indiceMinSubsec(s, i, s.size()-1);
        swapPos(i, minLocal, s);
        i++;

    }
    leerVector(s);
}

*/

/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 4 ///////////////////////
/////////////////////////////////////////////////////////////



/*
bool esTriangularSup(vector<vector<int> > m){
    for (int i = 1; i < m.size(); i++)
        for (int j = 0; j < i; j++)
            if (m[i][j] != 0)
                return false;
    return true;
}

bool esTriangularInf(vector<vector<int> > m){
    for (int i = 0; i < m.size(); i++)
        for (int j = i + 1; j < m.size(); j++)
            if (m[i][j] != 0)
                return false;
    return true;
}

bool esTriangular(vector<vector<int> > m){
    if(m.size() != m[0].size()){
        return false;
    }
    if(esTriangularSup(m) || esTriangularInf(m)){
        return true;
    }
    else{
        return false;
    }
}


void trasponer(vector<vector<int> > &m) {
    int columna = m[0].size();
    int fila = m.size();
    vector<vector<int>> matrizTrans(fila, vector<int>(columna));
	for(int i = 0; i < fila; i++){
	    for(int j = 0; j < columna;j++){
	        matrizTrans[i][j] = m[j][i];
	    }
	}
	m = matrizTrans;
	return;
}



bool subsecuencia(string s1, string s2) {
	int cont = 0;
	int f = 0;
	if(s1.size() > s2.size()) {
        return false;
    }
	else {
        for (int i = 0; i < s1.size(); i++) {
            for (int j = f; j < s2.size(); j++) {
                if (s1[i] == s2[j]) {
                    cont++;
                    f = j + 1;
                    j = s2.size();
                }
            }
        }
    }
	return cont == s1.size();
}


string rotar(string s, int j){
    string stringNuevo;
    if(j < 0) {
        j = -j;
    }
    if (j % s.size() == 0) {
        return s;
    }
    int a = (j % s.size());
    for (int i = s.size()-a; i < s.size(); i++){
        stringNuevo.push_back(s[i]);
    }
    for(int i = 0; i < s.size()-a; i++){
        stringNuevo.push_back(s[i]);
    }
    return stringNuevo;
}
*/

/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 5 ///////////////////////
/////////////////////////////////////////////////////////////
















