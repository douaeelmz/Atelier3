#include <iostream>
using namespace std;
//classe mere Animal 
class Animal {
	public:
	int Age;
	string Nom;
		
	Animal(int age , string nom)
	{
		Age= age ;
		Nom = nom;
	}
	
};
//classes derivees Zebra et Dolphin
class Zebra : public Animal{
	public:
	string Origin;
	Zebra(int age ,string nom,string origin):Animal(age, nom)
	{
		Origin = origin;
	}
	void message(){
		cout<<"Age - "<<Age<<endl;
		cout<<"Nom - "<<Nom<<endl;
		cout<<"Origin - "<<Origin<<endl;
	}
};
class Dolphin : public Animal{
	public:
	string Food;
	Dolphin(int age , string nom, string food):Animal(age, nom)
	{
		Food = food;
	}

	void message(){
		cout<<"Age - "<<Age<<endl;
		cout<<"Nom - "<<Nom<<endl;
		cout<<"Food - "<<Food<<endl;
	}
};

int main(){
	Zebra zebra1 = Zebra(10, "kki", "south africa");
//	zebra1= set_value(12,"Leo");
	zebra1.message();
	Dolphin dolphin1 = Dolphin(2, "Ryle", "fish");
//	dolphin1= set_value(4,"sparkle");
	dolphin1.message();
}

