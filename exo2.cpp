#include <iostream>
using namespace std;
//la classe Shape avec deux variables hauteur et largeur 
class Shape{
public:
	float Hauteur,Largeur ;
	Shape(float hauteur , float largeur){
		Hauteur = hauteur;
		Largeur = largeur;
	}
	//definetion de la methode area qui sera virtuelle 
	virtual float area( ) {
		float Aire = Hauteur*Largeur;
		cout<<" L'aire de la forme est "<< Aire <<endl; 
	}
};
//La classe Triangle avec la surcharge de la methode area 
class Triangle:public Shape {
	public:
	Triangle(float hauteur , float largeur ):Shape(hauteur, largeur){
		
	}
	float area( ) {
		float Aire = (Hauteur*Largeur)/2;
		cout<<" L'aire de la forme est "<< Aire <<endl; 
}
};
// La classe Rectengle herite de la classe Shape 
class Rectangle:public Shape {
	public:
		Rectangle(float hauteur , float largeur ):Shape(hauteur, largeur){	
		}
};
//La creation des objets de la classe rectengle puis triangle dans la methode main et appele a la methode area
int main(){
	Rectangle rectangle1 = Rectangle(9.2, 5);
	Triangle triangle1= Triangle(4.5, 1.5);
	rectangle1.area();
	triangle1.area();
}



