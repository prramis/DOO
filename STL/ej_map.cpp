#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main (){
	
	map<int, string>ejemplo;

	ejemplo[0]="Pablo";
	ejemplo[1]="otro Pablo";

	cout<< "Elemento\n";
	auto x = ejemplo.find(0);
	cout<< "Clave " << x->first << " Dato: " << x->second << endl;

	return 0; 
}