#include <iostream>
using namespace std;
//classe mere avec une methode qui affiche le message au dessous
class Mere{
public:
		Mere()
		{
		
		}
		virtual void display ()
		{
			cout<< "C'est le message pour la classe mere !"<<endl;
		}
};
//classe fille avec une methode qui affiche un message different
class Fille: public Mere{
public:
		Fille()
		{
		
		}
		void display (){
			cout<< "C'est le message pour la classe fille !"<<endl;
		}
};
//la creation de l'objet fille1
int main(){
	
	Fille fille1 ;
	fille1.display();	

}
