#include "Valor.h"
#include <iostream>
using namespace std;

Valor::Valor(int id, int val) {
    this->id = id;
    this->valor = val;    
}

int Valor::getValor() {
    return this->valor;
}

void Valor::setSiguiente(Valor* sigI) {
    this->sig = sigI;
}

Valor* Valor::getSiguiente() {
    return this->sig;
}

void Valor::mostrarInfo(){
    cout<<"La informacion del valor es: ID: "<<id<<", Valor: "<<valor<<endl;
}

void Valor::setValor(int val) {
    this->valor =val;
}

void Valor::setID(int val) {
    this->id =val;
}