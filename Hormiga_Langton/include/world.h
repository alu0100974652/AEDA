#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class World_t 
{
    private:

    int m_, n_;                             //m_ filas y n_ columnas
    vector<char> v_;                        //vector de caracteres
    int pos(int, int);                      //Determina la posición en el vector

    public:

    World_t(int, int);                      //Constructor
    ~World_t();                             //Destructor
    int get_m(void);                        //Devuelve la fila 
    int get_n(void);                        //Devuelve la columna
    void resize(int, int);                  //Rediseña la 'matriz'
    
    char at(int, int);                      //Contenido de la posición i, j
    void reset_matrix();                    //Pone el tablero en blanco
    void change_color(int, int, char);      //Cambia el color del tablero

    void write(ostream& = cout);            //Imprime el tablero

};