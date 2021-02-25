#ifndef VALOR_H
#define VALOR_H
#include <string>
class Valor {
public:
    Valor(int,int);
    int id;
    int getValor();
    void setValor(int);
    void setID(int);
    Valor* getSiguiente();
    void setSiguiente(Valor*);
    void mostrarInfo();
private:
    int valor;
    Valor *sig;
};

#endif