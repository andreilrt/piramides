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

		while(Altura>0){
			while(h>c){
				cout<<" ";
				c=c+1;
			}
			while(Altura>c){
				cout<<"A";
		    	c=c+1;
				h=0;	
			}
			cout<<endl;
			Altura=Altura-1;
			c=0;
		}
	return 0;
}





