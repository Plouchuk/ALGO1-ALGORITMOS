//
// Created by Lucho on 19/6/2021.
//

#include <iostream>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

/*
/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 1 ///////////////////////
/////////////////////////////////////////////////////////////


int f (int x,int y){
    int res = 0;
    if (x<y){
    res = x +y;
} else{
    res =x*y;
}
return res;
}

int main () {
std :: cout << "El resultado es: " << f (10,9) << std :: endl ;
return 0;
}

4)

bool esPrimo(int n) {
 int divisores = 0;
 for(int i=2; i<n; i=i+1) {
 if( n % i == 0 ) {
 divisores = divisores + 1;
 }
 }
 if (divisores == 0) {
 return true;
 } else {
 return false;
 }
 }

int main () {
std :: cout << "La respuesta es: " << esPrimo(7) << std :: endl ;
return 0;
}

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


6)

a)
int sumaDeImparesMenores(int n){
    int suma = 0;
    if (n == 0 || n == 1)
        return 0;
    if (n % 2 != 0){
        suma = (n-2) + sumaDeImparesMenores(n-2);
    } else {
        suma = (n-1) + sumaDeImparesMenores(n-1);
    } return suma;
}

b)
int sumaDeImparesMenoresNR(int n){
    int suma = 0;
    for(int i=0; i<n; i++){
        if(i % 2 == 1){
            suma = suma + i;
        }
        if (i == n-1){
            return suma;
        }
    }
}

int main(){
    float n;
    std:: cout << "Ingrese un numero: " << std :: endl;
    std:: cin >> n;
    std:: cout << "La suma de numeros impares menores que "<<n<<" es " <<sumaDeImparesMenores(n) <<std:: endl;
}

7)

 a)

int sumaDivisoresHasta(int n, int k){
    if(k == 1)
        return 1;
    if(n % k == 0){
        return k + sumaDivisoresHasta(n, k-1);
    }else{
        sumaDivisoresHasta(n, k-1);
    }
}

int sumaDivisores(int n){
    sumaDivisoresHasta(n,n);
}

/*
int sumaDivisoresNR(int n){
    int suma = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            suma = suma + i;
        }
        if (i == n){
            return suma;
        }
    }
}

int main(){
    int n;
    std:: cout << "Ingrese un numero: " << std :: endl;
    std:: cin >> n;
    std:: cout << "La suma de todos los divisores entre 1 y "<<n<<" es " <<sumaDivisores(n) <<std:: endl;
}


8)
a)

int factorial(int n){
    int producto = 0;
    if (n == 0)
        return 1;
    if (n > 1){
        return producto = n * factorial(n-1);
    }
}

int numeroCombinatorio(int n, int k){
    return factorial(n)/ (factorial(k)*(factorial(n-k)));
}

int main(){
    int n;
    int k;
    std:: cout << "Ingrese n y luego k" << std :: endl;
    std:: cin >> n;
    std:: cin >> k;
    std:: cout << "El numero de formas de escoger "<<k<<" elementos a partir de un conjunto de "<<n<< " es: " <<numeroCombinatorio(n,k) <<std:: endl;
}

b) ni puta idea


*/
/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 2 ///////////////////////
/////////////////////////////////////////////////////////////

/*
1)
float sumaYPromedioDeNotas() {
    float sumatoriaNotas = 0;
    for (int i=1; i <= 10; i++) {
        int n;
        std::cout << "Ingrese la nota del " << i << "-avo estudiante:" << std::endl;
        std::cin >> n;
        sumatoriaNotas = sumatoriaNotas + n;
    }
    float promedioNotas = sumatoriaNotas/10;
    std::cout<< "La suma de las notas es de: "<<sumatoriaNotas<< "\nEl promedio de las notas es de: "<<promedioNotas<<std::endl;
}

int main(){
    sumaYPromedioDeNotas();
    return 0;
    }

2)

float sumaYPromedioDeNotasInfinitas(){
    float sumatoriaNotas = 0;
    int n;
    int i = 0;
    while(n != -1) {
        std::cout << "Ingrese la nota del " << i+1 << "-avo estudiante (-1 para terminar):" << std::endl;
        std::cin >> n;
        if (n != -1) {
            sumatoriaNotas = sumatoriaNotas + n;
            i++;
        }
    }
    float promedioNotas = sumatoriaNotas/i;
    std::cout<< "La suma de las notas es de: "<<sumatoriaNotas<< "\nEl promedio de las notas es de: "<<promedioNotas<<std::endl;
}

int main(){
    sumaYPromedioDeNotasInfinitas();
    return 0;
}


3)


float sumaYPromedioDeNotasInfinitas(){
    float sumatoriaNotas = 0;
    int n;
    float cantAlumnosTotales = 0;
    float cantAlumnosAprob = 0;
    float cantAlumnosDesaprob = 0;
    while(n != -1){
        std::cout << "Ingrese la nota del " << cantAlumnosTotales+1 << "-avo estudiante (-1 para terminar):" << std::endl;
        std::cin>> n;
        if(n != -1) {
            sumatoriaNotas = sumatoriaNotas + n;
            cantAlumnosTotales++;
            if (n>=6) {
                cantAlumnosAprob++;
            }
            if (n<6){
                cantAlumnosDesaprob++;
            }
        }
    }
    if (cantAlumnosTotales < 6) {
        std::cout << "Error, la cantidad de alumnos debe ser de 6 o mas. Fueron ingresada/s " << cantAlumnosTotales<< " notas" << std::endl;
    }
    if (cantAlumnosTotales >= 6) {
        bool dosTerciosAprob = cantAlumnosTotales * 2 / 3 <= cantAlumnosAprob;
        float promedioNotas = sumatoriaNotas / cantAlumnosTotales;
        if (dosTerciosAprob == true) {
            std::cout << "Se puede incrementar el numero de plazas del curso" << std::endl;
        }
        std::cout << "La suma de las notas es de: " << sumatoriaNotas << "\nEl promedio de las notas es de: "
                  << promedioNotas << std::endl;
    }
}

int main(){
    sumaYPromedioDeNotasInfinitas();
    return 0;
}

4)


int transformarADecimal(int n){


}


int main(){
    int n;
    std::cout<< "Ingrese un numero binario para convertirlo en el equivalente decimal: " <<std::endl;
    std::cin >> n;
    transformarADecimal(n);
    return 0;
}


5)


void calculoDeDiamCircYArea(float n, float &diametro, float &circunferencia, float &area){
    float pi = 3.14159;
    diametro = n+n;
    circunferencia = diametro*pi;
    area = pi*(n*n);
}


int main(){
    float n;
    float diametro = 0;
    float circunferencia = 0;
    float area = 0;
    std::cout<<"Escriba el radio del circulo para recibir su diametro, circunferencia y area:"<<std::endl;
    std::cin>> n;
    calculoDeDiamCircYArea(n, diametro, circunferencia,area);
    std::cout<<"El diametro es de: "<<diametro<<"\nLa circunferenciaa es de: "<<circunferencia<<"\nEl area es de: "<<area<<std::endl;
    return 0;
}

6)

float triplicaPorValor(float n){
    float tresN = 3*n;
    return tresN;
}

float triplicaPorReferencia(float &n){
    n = 3*n;
}



int main(){
    float n;
    std::cout<<"Esrciba el valor para que sea triplicado: "<<std::endl;
    std::cin>> n;
    std::cout<<"El valor triplicado por valor es: "<<triplicaPorValor(n)<<std::endl;
    triplicaPorReferencia(n);
    std::cout<<"El valor triplicado por referencia es: "<<n<<std::endl;
    return 0;
}


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


a)

void collatz(int n, int& cantPasos) {
    std::cout<<n<<std::endl;
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
            } else {
            n = (3 * n) + 1;
        }
        std::cout<<n<<std::endl;
        cantPasos++;
    }
}

int main(){
    int n;
    int cantPasos = 1;
    std::cout<<"Tirate un numero y te tiro su collatz y la cantidad de pasos, aca, sin dudarlo pa:"<<std::endl;
    std::cin>> n;
    std::cout<<"La sucesion es: "<<std::endl;
    collatz(n,cantPasos);
    std::cout<<"La cantidad de pasos es de: "<<cantPasos<<std::endl;
    return 0;
}


b)




void collatz(int n, int& cantPasos) {
    if(n % 2 == 0 && n > 1){
        n = n/2;
        std::cout<<n<<std::endl;
        cantPasos++;
    } if (n % 2 != 0 && n>1) {
        n = 3*n +1;
        std::cout<<n<<std::endl;
        cantPasos++;
    } if (n == 1)
        std::cout<<"1"<<std::endl;
    }
    collatz(n, cantPasos);
}




int main() {
    int n;
    int cantPasos = 1;
    std::cout << "Tirate un numero y te tiro su collatz y la cantidad de pasos, aca, sin dudarlo pa:" << std::endl;
    std::cin >> n;
    std::cout << "La sucesion es: " << std::endl;
    std::cout << n << std::endl;
    collatz(n, cantPasos);
    std::cout << "La cantidad de pasos es de: " << cantPasos << std::endl;
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
     No hace falta modificar el main
    //Leo la entrada
    int divisor,dividendo,cociente,resto;
    cin >> dividendo>>divisor;

    //Calculo la division
    division(dividendo, divisor,cociente,resto);
    cout<<cociente<<" "<<resto<<endl;
    return 0;
}


*/

/////////////////////////////////////////////////////////////
/////////////////////// HACKER RANK 3 ///////////////////////
/////////////////////////////////////////////////////////////


/*

int maximoComunDivisor(int x, int y){
    int a = maximo(x,y);
    int b = minimo(x,y);
    int resto;
    while((b!=0)){
        resto = b;
        b = a%b;
        a = resto;
    }
    return a;
}


//EJ 1


Pc = {i = 1}
Qc = {i = |s|-1 && res = true <--> (E::k : Z) (1 <= k < |s| - 1 ?L s[k] > s[k - 1] ? s[k] > s[k + 1])}

//Pre {|s| > 2}
bool existePico(vector<int> &s);


//EJ 3


Pc = i = r
Qc = i = l-1 && l ≤ res ≤ r ∧ (∀k : Z)( l ≤ k ≤ r −→L s[k] ≥ s[res])


//Pre {|s| > 0 && l >= 0 && r < |s| && l <= r}
// 0 <= l <= r < |s|
int indiceMinSubsec(vector<int> s,int l , int r);

//EJ 4


Pc = {i = 0}
Qc = {i = |s| ∧L |s| = |s0| ∧ mismos(s, s0) ∧L ordenada(subseq(s, 0, |s|))}

//Pre = {s = S0 && |s| > 0}

void swapPos(int a, int b, vector<int>& v);
void Ordenar1(vector<int> &s);
void leerVector(vector<int> v);

int main(){

    vector<int>A = {1,2,3};
    vector<int>B = {1,3,2};
    vector<int>C = {0,1,0,0,2};
    vector<int>U = {0,0,0,0,0};
    vector<int>H = {5,0,0,0,9};

    vector<int> P = {0, 0, 0, 0};
    vector<int> G = {9, 8, 8, 2, 9, 0};
    vector<int> J = {0, 1, 2, 10};


    //Ej 1

    bool res;

 TEST 1, A, B, C, U, H
    res = existePico(A);
    cout<< res <<endl;

    res = existePico(B);
    cout<< res <<endl;

    res = existePico(C);
    cout<< res <<endl;

    res = existePico(U);
    cout<< res <<endl;

    res = existePico(H);
    cout<< res <<endl;



    //EJ 3, A, P, G, J

    0
    0
    5
    0



    int ind;
    int l;
    int r;

    cout<<"Ingresar l: ";
    cin>> l;
    cout<<"Ingresar r:";
    cin>> r;

    ind = indiceMinSubsec(A,l,r);

    cout<<"Indice minimo de subseq"<< "(" << "A" <<", "<< l <<", "<< r <<" )"<< endl;
    cout<< ind<< endl;

    cout<<"Ingresar l: ";
    cin>> l;
    cout<<"Ingresar r:";
    cin>> r;

    ind = indiceMinSubsec(P,l,r);


    cout<<"Indice minimo de subseq"<< "(" << "P" <<", "<< l <<", "<< r <<" )"<< endl;
    cout<< ind<< endl;

    cout<<"Ingresar l: ";
    cin>> l;
    cout<<"Ingresar r:";
    cin>> r;

    ind = indiceMinSubsec(G,l,r);


    cout<<"Indice minimo de subseq"<< "(" << "G" <<", "<< l <<", "<< r <<" )"<< endl;
    cout<< ind<< endl;

    cout<<"Ingresar l: ";
    cin>> l;
    cout<<"Ingresar r:";
    cin>> r;

    ind = indiceMinSubsec(J,l,r);


    cout<<"Indice minimo de subseq"<< "(" << "J" <<", "<< l <<", "<< r <<" )"<< endl;
    cout<< ind<< endl;




    vector<int> Des1 = {1, 2, 3, 4, 5, 6};
    vector<int> Des2 = {90};
    vector<int> Des3 = {2, 3, 5, 6, 4, 1};
    vector<int> Des4 = {0,0,0,10,0 };
    vector<int> Des5 = {100, 35,22 };

    //EJ 4

    Ordenar1(Des1);
    Ordenar1(Des2);
    Ordenar1(Des3);
    Ordenar1(Des4);
    Ordenar1(Des5);

    leerVector(Des1);
    leerVector(Des2);
    leerVector(Des3);
    leerVector(Des4);
    leerVector(Des5);


    return 0;
}

//Ej 1

//pre{|s| > 2}
bool existePico(vector<int> &s){
    bool res = false;
    int i = 1;
    while(i < s.size()-1){
        if(s[i] > s[i-1] && s[i] > s[i+1]){
            res = true;  //res = res || true;
        }


        i++;
    }
    return res;
}


si se cambiara en I res = True <-> por res = False <->, entonces res inicializa en true, y
la guarda del if se niega, entonces res actualiza a false


//EJ 3
//Pre = {|s| > 0 && l >= 0 && r < |s| && l <= r}
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

//EJ 4

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

void cambiarPos(int a, int b, vector<int>& v){
    int aux;
    aux = v[a];
    v[a] = v[b];
    v[b] = aux;

}

void ordenar1(vector<int> &s){
    int minLocal;
    int i = 0;
    while(i < s.size()){
        minLocal = indiceMinSubsec(s, i, s.size()-1);
        cambiarPos(i, minLocal, s);
        i++;
    }
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