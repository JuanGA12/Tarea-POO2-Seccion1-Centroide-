#include <iostream>
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Circulo.h"


using namespace std;
int main() {
    float Centroide_x;
    float Centroide_y;
    float base1, base2, altura1, altura2,radio,x1,x2,x3,y1,y2,y3;
    int verdad1,verdad2,verdad3;

    cout << endl;
    cout << "Bienvenido al programa, por favor seleccione las medidas y las componentes de las siguientes figuras"<< endl;

    cout << "Triangulo"<<endl;
    cout << "Base: "<<endl;
    cin >> base1;
    cout << "Altura: "<<endl;
    cin >> altura1;
    cout << "Componente x: "<<endl;
    cin >> x1;
    cout << "Componente y: "<<endl;
    cin >> y1;
    cout << "¿Es hueco? (1 = no , 0 = si)"<<endl;
    cin >> verdad1;

    cout << "Rectangulo"<<endl;
    cout << "Base: "<<endl;
    cin >> base2;
    cout << "Altura: "<<endl;
    cin >> altura2;
    cout << "Componente x: "<<endl;
    cin >> x2;
    cout << "Componente y: "<<endl;
    cin >> y2;
    cout << "¿Es hueco? (1 = no , 0 = si)"<<endl;
    cin >> verdad2;

    cout << "Circulo"<<endl;
    cout << "Radio: "<<endl;
    cin >> radio;
    cout << "Componente x: "<<endl;
    cin >> x3;
    cout << "Componente y: "<<endl;
    cin >> y3;
    cout << "¿Es hueco? (1 = no , 0 = si)"<<endl;
    cin >> verdad3;



    Triangulo Triangulo1;
    Triangulo1.setverdad(verdad1);//el objeto.setverdad va a validar si la figura se suma o se resta, si es 1, la figura se suma, si es 0 la figura se resta(se toma como hueca)
    Triangulo1.setbase(base1);
    Triangulo1.setaltura(altura1);
    Triangulo1.setx(x1);
    Triangulo1.sety(y1);

    cout << "Area del triangulo es: " << Triangulo1.area()<<endl;
    cout << "Area por x " << Triangulo1.area_por_x()<<endl;
    cout << "Area por y " << Triangulo1.area_por_y()<<endl;



    Rectangulo Rectangulo1;
    Rectangulo1.setverdad(verdad2);
    Rectangulo1.setbase(base2);
    Rectangulo1.setaltura(altura2);
    Rectangulo1.setx(x2);
    Rectangulo1.sety(y2);

    cout << "Area del rectangulo es: " << Rectangulo1.area()<<endl;
    cout << "Area por x " << Rectangulo1.area_por_x()<<endl;
    cout << "Area por y " << Rectangulo1.area_por_y()<<endl;

    Circulo Circulo1;
    Circulo1.setverdad(verdad3);
    Circulo1.setradio(radio);
    Circulo1.setx(x3);
    Circulo1.sety(y3);

    cout << "Area del circulo es: " << Circulo1.area()<<endl;// No existe area negativa pero para fines del problema si se va a restar la figura, se va a poner que el area es negativa.
    cout << "Area por x " << Circulo1.area_por_x()<<endl;
    cout << "Area por y " << Circulo1.area_por_y()<<endl;

    Centroide_x = ( ( Triangulo1.area_por_x() +  Rectangulo1.area_por_x() + Circulo1.area_por_x() )  / ( Triangulo1.area() + Rectangulo1.area() + Circulo1.area() ) );

    Centroide_y = ( ( Triangulo1.area_por_y() +  Rectangulo1.area_por_y() + Circulo1.area_por_y() )  / ( Triangulo1.area() + Rectangulo1.area() + Circulo1.area() ) );

    cout << "El centroide  de la figura esta en el punto (" << Centroide_x<< " , " << Centroide_y << ")" << endl;
    return 0;
}
