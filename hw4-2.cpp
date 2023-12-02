
	#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x, y, z, M, N,O;
	float R;
	
	x=15;
	y=6;
	z=80;
	
M=(x-y)*(x+z);

O=1;

N=(x+y+z)*(x+y+z);
N=N+O;

R=(float) M/N;	
	

	
	cout<<R;
}
