#include <iostream>
using namespace std;
//La classe qui defini un nombre complexe avec les deux parties ; reelle et imaginaire 
class complexeNumber{
public:
	float Re;
	float Im;
	complexeNumber(float re, float im){
		Re = re;
		Im = im;
	}	
};

int main(){
	// La recuperation des parties reelles et imaginaires des deux nombres qu'on veut effectuer les operations sur
	float Re1 , Re2, Im1 , Im2;
	string Operator;
	cout << "Entrer la partie reelle et puis la partie imaginaire du premier nombre complexe !"<<endl;
	cin >>Re1>>Im1;
		//Affichage du premier nombre 
	cout<<Re1<<"+i"<<Im1<<endl;
	cout << "Entrer la partie reelle et puis la partie imaginaire du deuxieme nombre complexe !"<<endl;
	cin >> Re2>>Im2;
		//Affichage du deuxieme nombre 
	cout<<Re2<<"+i"<<Im2<<endl;
		// Créer les deux objets de la classe complexeNumber
	complexeNumber Num1 = complexeNumber(Re1, Im1);
	complexeNumber Num2 = complexeNumber(Re2, Im2);
	cout << "Quelle operation vous voulez faire? ( + | - | * )"<<endl;
	cin >> Operator;
	// La fonction pour les opérantions 
			// l'addition
	if ( Operator == "+"){
			float sumRe = Num1.Re + Num2.Re;
			float sumIm = Num1.Im + Num2.Im;
			cout << "L'addition des deux nombres nous donne la partie reelle est "<< sumRe <<" et la partie imaginaire est "<< sumIm <<endl;
			cout<<sumRe<<"+i"<<sumIm<<endl;
	}
			// la sustraction
	else if (Operator == "-"){
			float subRe = Num1.Re - Num2.Re;
			float subIm = Num1.Im - Num2.Im;
			cout << "la sustraction des deux nombres nous donne la partie reelle est "<< subRe <<" et la partie imaginaire est "<< subIm<<endl;
			cout<<subRe<<"+i"<<subIm<<endl;
	}
				// Le produit
	else if (Operator == "*"){
			float mulRe = Num1.Re*Num2.Re - Num1.Im*Num2.Im;
			float mulIm = Num1.Re*Num2.Im + Num1.Im*Num2.Re;
			cout << "Le produit des deux nombres nous donne la partie reelle est "<< mulRe <<" et la partie imaginaire est "<< mulIm <<endl;
			cout<<mulRe<<"+i"<<mulIm<<endl;
	}	
}

