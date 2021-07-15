#include<iostream>
#include<tuple>
using namespace std;

tuple<int, int, int, int> operaciones( int x, int y){
	return make_tuple(x+y, x-y, x*y, x/y);
}

int main (){

	int sum, resta, mult, div;
	
	tie(sum, resta, mult, div) = operaciones (6, 2);

	cout<< "Resultado\n";
	cout<< "Suma: " 			<< sum << endl;
	cout<< "resta: " 			<< resta << endl;
	cout<< "Multiplicación: " 	<< mult << endl;
	cout<< "Division: " 		<< div << endl;

	return 0; 
}