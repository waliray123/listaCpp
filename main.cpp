#include <cstdlib>
#include <string>
#include "Valor.h"
typedef Valor* Val;
using namespace std;

Val primerValor;
int idValores;

void menu();
void opciones(int);
void mostrarDatos();
void insersion();
void eliminacion();
Val busqueda();

int main(int argc, char** argv) {
    printf("BIENVENIDO");
    primerValor = new Valor(0,0);
    primerValor->setSiguiente(NULL);
    menu();
    return 0;
}

void menu(){
    int opcion = 0;
    while(opcion != 5){
        printf("Ingrese el numero de la accion que desea realizar\n");
        printf("1. Mostrar datos \n");
        printf("2. Insertar un dato\n");
        printf("3. Eliminar un dato\n");
        printf("4. Buscar un dato\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);    
        if (opcion > 0 && opcion < 5)
        {
            opciones(opcion);
        }            
    }
}

void mostrarDatos(){
    Val vt;
    vt = primerValor;
    if(vt->getSiguiente() == NULL)
    {
        printf("La lista esta vacia");
        return;
    }
    while(vt->getSiguiente() != NULL)
    {
        vt->mostrarInfo();
        vt = vt->getSiguiente();
    }
}

void insersion(int dato){
    idValores++;
    Val vt;

    if (primerValor->getSiguiente() == NULL)
    {
        vt = primerValor;
    }else{
        vt = primerValor;
        while(vt != NULL)
        {
            if(vt->getSiguiente() == NULL){
                break;  
            }              
            vt = vt->getSiguiente();        
        }
    }
    Val nuevoVal;
    nuevoVal = new Valor(0,0);
    nuevoVal->setSiguiente(NULL);
    vt->setID(idValores);
    vt->setValor(dato);
    vt->setSiguiente(nuevoVal);    
    printf("Se ingreso la persona Correctamente");
}

void eliminacion(int dato){

}

Val busqueda(int idBus){
    Val vt;
    vt = primerValor;
    if(vt->id == idBus)
    {        
        return vt;
    }
    while(vt->getSiguiente() != NULL)
    {
        if (vt->id == idBus)
        {
            return vt;
        }
        vt = vt->getSiguiente();
    }
    return NULL;
}

void opciones(int numOpcion){
    if (numOpcion == 1)
    {
        //Mostrar Todos los datos
        mostrarDatos();
        printf("\n");
    }
    else if(numOpcion == 2){
        //Insertar un dato     
        printf("Ingrese el dato a insertar \n");
        int dato;
        scanf("%d", &dato);
        insersion(dato);   
        printf("\n");
    }
    else if(numOpcion == 3){
        //Eliminar un dato
        printf("Ingrese el dato a Eliminar \n");
        int dato;
        scanf("%d", &dato);
        eliminacion(dato);
        printf("\n");        
    }
    else if(numOpcion == 4){
        //Buscar la posicion de un dato
        printf("Ingrese el ID a buscar \n");
        int dato;
        scanf("%d", &dato);    
        Val valBus = busqueda(dato);
        if (valBus == NULL)
        {
            printf("No existe el valor con ese ID");
        }else{
            valBus->mostrarInfo();
        }
        
        printf("\n");
        
    }

}