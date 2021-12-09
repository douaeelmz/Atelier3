#include <iostream>
using namespace std;

class Media{
	public:
		Media(){
			
		}
		void imprimer(){
			cout<<"C'est la classe Media"<<endl;
		}
		char *id(){
			cout<<"la methode id"<<endl;
		}
};
class Livre:public Media{
	public:
		int NumPages;
		Livre(int numPages){
			NumPages=numPages;
		}
};
class Audio:public Media{
	public:
		int NumSec;
		Audio(int numSec){
			NumSec=numSec;
		}
};
class Press:public Media{
	public:
		int Date;
		Press(int date){
			Date=date;
		}
};
class Revue:public Press{
		public:
		int NumPages;
		Revue(int numPages){
			NumPages=numPages;
		}
};
class Magazine:public Press{
		public:
		int NumPages;
		Magazine(int numPages){
			NumPages=numPages;
		}
};class Journal:public Press{
		public:
		int NumPages;
		Journal(int numPages){
			NumPages=numPages;
		}
};
class CD:public Audio{
		public:
		float Capacity;
		CD(int capacity){
			Capacity=capacity;
		}
};
class Disque:public Audio{
		public:
		float Capacity;
		Disque(int capacity){
			Capacity=capacity;
		}
};class Cassette:public Audio{
		public:
		float Capacity;
		Cassette(int capacity){
			Capacity=capacity;
		}
};
int main(){
	Media objet;
	
}
