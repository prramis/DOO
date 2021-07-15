#include<iostream>
#include<tuple>
using namespace std;

tuple<int, int, int, int> operaciones( int x, int y){
	return make_tuple(x+y, x-y, x*y, x/y);
}

int main (){
	
	tuple<int, int, int, int> resultado = operaciones (6, 2);

	cout<< "Resultado\n";
	cout<< "Suma: " 			<< get<0>(resultado) << endl;
	cout<< "resta: " 			<< get<1>(resultado) << endl;
	cout<< "Multiplicación: " 	<< get<2>(resultado) << endl;
	cout<< "Division: " 		<< get<3>(resultado) << endl;

	return 0; 
}