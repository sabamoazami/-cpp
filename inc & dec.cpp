#include <iostream>
#include <conio.h>
using namespace std;
void increment(int x){
	int i,k,y;
	y=x;
	cout<<"enter k : ";
	cin>>k;
	for(i=1;i<=k;i++){
		y++;
		cout<<"increment : "<<y<<"\t";
		
	}

}
void decrement(int n){
	int z,j,d;
	z=n;
	cout<<"\nenter d : ";
	cin>>d;
	for(j=1;j<=d;j++){
		z--;
		cout<<"decrement : "<<z<<"\t";
	}
}

int main(){
	int a;
	cout<<"enter a : ";
	cin>>a;
	increment(a);
	decrement(a);
	getch();
	}
