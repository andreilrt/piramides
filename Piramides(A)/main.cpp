#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int menu=0;
	int Altura=0;
	int c=0;
	int h=0;
	cout<<"Menu"<<endl<<"0=Salir"<<endl<<"1=piramide1"<<endl
	<<"2=piramide2"<<endl<<"3=piramide3"<<endl<<"4=piramide4"
	<<endl<<"5=piramide5"<<endl;
	
	cout<<"ingrese un numero ";cin>>menu;
	
	if(menu<=0){
		cout<<"Programa Finalizado";
		exit(0);
	}
	if(menu>5){
		cout<<"Programa Finalizado";
		exit(0);
	}
	cout<<"ingrese la altura de la piramide ";cin>>Altura;
	cout<<endl;
	if(Altura<=0){
		cout<<"Programa Finalizado";
		exit(0);
	}
	if(menu==1){
		while(Altura>0){
			while(Altura>c){
				cout<<"A";
		    	c=c+1;	
			}
			cout<<endl;
			Altura=Altura-1;
			c=0;
		}
	}
	if(menu==2){
		while(Altura>c){
			while(h<=c){
				cout<<"A";
				h=h+1;
			}
			cout<<endl;
			c=c+1;
			h=0;
		}
	}
	if(menu==3){
		while(Altura>0){
			while(h>c){
				cout<<" ";
				c=c+1;
			}
			c=0;
			while(Altura>c){
				cout<<"A";
		    	c=c+1;	
			}
			cout<<endl;
			Altura=Altura-1;
			c=0;
			h=h+1;
		}
	}
	if(menu==4){
		while(Altura>0){
	 		while(Altura>c){
			if(h>c){
				cout<<" ";
				c=c+1;
			
			}
			else
			{
				cout<<"A";
				c=c+1;
	    		
			}
		}
		h=h+1;
		cout<<endl;
		Altura=Altura-1;
		c=0;
		}
	}
	if(menu==5){
	int i=1;
	int j=1;
    	while(Altura>c){
        	while(Altura>i){
            	cout<<" ";
            	i=i+1;
        }
        i=1;
        while(j>c){
            cout<<"*";
            c=c+1;
        }
        j=j+1;
        cout<<endl;
        c=0;
        Altura=Altura-1;
  		  }
	}
	return 0;
}

