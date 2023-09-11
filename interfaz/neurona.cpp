#include "neurona.h"
#include<iostream>

using namespace std;

Neurona::Neurona(int id, float voltaje, int posicion_x, int posicion_y, int red, int green, int blue)
{
    this ->id =id;
    this ->voltaje =voltaje;
    this ->posicion_x =posicion_x;
    this ->posicion_y =posicion_y;
    this ->red =red;
    this ->green =green;
    this ->blue =blue;
}

void Neurona::print(){
    cout <<"\nNeurona: " <<id <<"\nVoltaje: " <<voltaje << "\nPosicion (x, y): (" <<posicion_x
         <<", " <<posicion_y <<")\nColor (R, G, B): (" <<red <<", " <<green <<", " <<blue << ")\n";
}
