#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int Altura=0;
	int c=0;
	int h=0;

	cout<<"ingrese la altura de la piramide ";cin>>Altura;
	if(Altura<=0){
		cout<<"Programa Finalizado";
		exit(0);
    }

		while(Altura>c){
			while(h<=c){
				cout<<"A";
				h=h+1;
			}
			cout<<endl;
			c=c+1;
			h=0;
		}
	return 0;
}


