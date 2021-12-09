#include <iostream>
using namespace std;

class Personne {
	private:
		string Nom;
		string Prenom;
		int DateN;
		public:
		Personne(string nom="", string prenom ="", int dateN =0){
			Nom = nom ;
			Prenom = prenom;
			DateN = dateN;
		}
		public:
		string getNom(){
			Nom=Nom;
			return Nom;
		}
		string getPrenom(){
			Prenom = Prenom;
			return Prenom;
		}
		int getDate(){
			DateN = DateN;
			return DateN;
		}
		virtual void Afficher(){
			cout<<"Le Nom est "<<getNom()<<endl;
			cout<<"Le Prenom est "<<getPrenom()<<endl;
			cout<<"La date de naissance : "<<getDate()<<endl;
		}
		};
	// Création de la classe Employé qui hérite Personne
class Employee:private Personne{
	int Salaire;
	public:
	Employee(string getNom(), string getPrenom(), int getDate() ,int salaire=0)
	{
		
		Salaire = salaire;
	}
	void Afficher(){
			cout<<"Le Nom est "<<getNom()<<endl;
			cout<<"Le Prenom est "<<getPrenom()<<endl;
			cout<<"La date de naissance : "<<getDate();
			cout<<"Le salaire est "<<Salaire<<" DH"<<endl;
		}
};

class Chef:private Employee{
	string Service;
	public:
	Chef(string getNom(), string getPrenom(), int getDate() ,int salaire=0,string service)
	{
		
		Service = service;
	}
	void Afficher(){
			cout<<"Le Nom est "<<getNom()<<endl;
			cout<<"Le Prenom est "<<getPrenom()<<endl;
			cout<<"La date de naissance : "<<getDate()<<endl;
			cout<<"Le salaire est "<<Salaire<<" DH"<<endl;
			cout<<"Le service est "<<Service<<endl;
		}
};
class Directeur:private Chef{
	string Societe;
	public:
	Chef(string getNom(), string getPrenom(), int getDate() ,int salaire=0,string service, string societe)
	{
		
		Societe = societe;
	}
	void Afficher(){
			cout<<"Le Nom est "<<getNom()<<endl;
			cout<<"Le Prenom est "<<getPrenom()<<endl;
			cout<<"La date de naissance : "<<getDate()<<endl;
			cout<<"Le salaire est "<<Salaire<<" DH"<<endl;
			cout<<"Le service est "<<Service<<endl;
			cout<<"La societe est "<<Societe<<endl;
		}
};
		
int main(){
	Personne P1 = Personne("Bloom","Lilly",1983);
	P1.Afficher();
	Employee E1= Employee("Red","Jhon",1974,10000);
	E1.Afficher();
}
