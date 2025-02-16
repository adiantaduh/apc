#include <stdio.h> 

void exibir(int x, int y);
void add_valor(int n1, int n2);
void add_ref(int &n1, int n2);
void add_ponteiro(int *n1, int n2);

// função que 'retorna' a distancia entre dois numeros
double distancia(double x, double y) {
    double diff = x-y;
    if(diff < 0) return -diff;
    return diff;

}


void add_valor(int n1, int n2) {
    n1 = n1 = n2;

}
// passagem de parametros por referencia
// n1 e x coexistem no mesmo endereço de memória 
// n2 = y (copia do valor de y)
void add_ref(int &n1, int n2) {
    n1 = n1 + n2;
    exibir(n1, n2);
}

void exibir(int x, int y) {
     printf("x: %d, y: %d\n", x, y)
}

// simulando passagem de parametros por referencia
// n1 = &x (valor), n2 = y (copia do valor de y)
void add_ponteiro(int *n1, int n2) {
    *n1 = *n1 + n2
    exibir(n1, n2);
}

// passagem de parametros 

int main() {

    int n = 5;
    int &ref = n; // referência a n - compartilha o mesmo endereço de memoria
    int *p = &n; // ponteiro para n

    ref = 10;
    printf("n %d (&n: %p, %ref: %p, &p: %p)\n", n, &n, &ref, &p)
    *p = 15;
     printf("n %d (&n: %p, %ref: %p, &p: %p)\n", n, &n, &ref, &p)

     int x = 3, y = 5;
     // int n1 = x, n2 = y;
     // n1 = n1 + n2;


     add_valor(x, y);
        // int n1 = x, n2 = y;
        // n1 = n1 + n2;
     printf("x: %d, y: %d\n", x, y) // x = 3 e y = 5

     add_ref(x, y);
        // int &n1 = x, n2 = y;
        // *n1 = *n1 + n2;
     printf("x: %d, y: %d\n", x, y) // x = 8 e y = 5

     add_ponteiro(&x, y);
        // int *n1 = &x, n2 = y;
        // *n1 = *n1 + n2;
      printf("x: %d, y: %d\n", x, y)


    printf("distancia(3,5): %.1f\n", distancia(3,5))
printf("distancia(5,3): %.1f\n", distancia(5,3))
printf("distancia(5,5): %.1f\n", distancia(5,5))




    return 0;
}