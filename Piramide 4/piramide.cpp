#include <iostream>

using namespace std;

int main()
{
    int h = 0;
    int i = 1;
    int c = 0;
    int j = 1;
    cout<<"Digite la altura: ";
    cin>>h;
    while(h>c){
        while(h>i){
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
        h=h-1;
    }
    return 0;
}

