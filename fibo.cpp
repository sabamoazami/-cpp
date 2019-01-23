#include <iostream>
#include <conio.h>
using namespace std;
int fibo(int n){
	   	int a,b,c,x,i=0;
	   	x=n;
    	a=1;
    	b=1;
    	for(i=2;i<=x;i++)
    	{
    		c=a+b;
    		a=b;
    		b=c;
		}
		return c;
}
int main(){
	int  n;
	cout<<"enter n: ";
	cin>>n;
	cout<<"a"<<n<<" = "<<fibo(n);
    getch();
}

