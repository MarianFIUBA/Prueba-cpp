using namespace std;
#include <iostream>
#include <ctime>
#include <cstdlib>

const int MAX = 20;

typedef struct mapa{
    int coordenada_x[MAX];
    int coordenada_y[MAX];
}mapa_t;


void cargar_coordenadas (mapa_t *lugar){
    for (int i = 0; i < MAX; i++){
        lugar->coordenada_x[i] = rand()%MAX;
        lugar->coordenada_y[i] = rand()%MAX;
    }
}


void imprimir_coordenadas (mapa_t lugar){
    for (int i = 0; i < MAX; i++){
        cout << "Punto " << i << ": (" << lugar.coordenada_x[i] << ", ";
        cout << lugar.coordenada_y[i] << ")" << endl;
    }
}


int main (){
    srand(time(NULL));
    mapa_t lugar;
    cargar_coordenadas(&lugar);
    imprimir_coordenadas(lugar);
    return 0;
}