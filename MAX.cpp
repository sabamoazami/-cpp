#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, b, c,max=0;
	cout<< "enter numbers:\n";
	cin>>a>>b>>c;
	if ( a>=max)
	max = a ;
	if( b>=max)
	max = b ;
	if( c>=max)
	max = c ;
	cout<< "max = "<<max ;
	getch();
}
