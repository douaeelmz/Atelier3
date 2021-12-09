#include <iostream>
using namespace std;
// Declaration de la classe MyClass 
 class MyClass {
 public:
 		string name;
// Declaration du constructeur et destructeur
	MyClass();
	~MyClass();
};
 // Definir le constructeur et destructeur dehors de la classe
 
 MyClass::MyClass(){
 		cout<<"Entrez votre nom !"<<endl;
 		cin>>name;
 		cout<<"Bonjour "<<name<<" !"<<endl;
 	 }
 MyClass::~MyClass(){
 			
 		 cout<<"Au revoir "<<name<<" !"<<endl;
 	 }
 
 int main(){
	 // Creation de l'objet "objet" dans la fontion main
	 MyClass objet;
	 
 }
