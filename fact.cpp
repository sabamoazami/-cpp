#include <iostream>
#include <conio.h>
using namespace std;
void fact(int);
int main(){
	int n;
	cin>>n;
	fact(n);
}
 void fact(int n){
 	int i,f=1;
 	for(i=1;i<=n;i++){
 		f*=i;
	 }
	 cout<<f;
 }
