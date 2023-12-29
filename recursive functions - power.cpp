#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int power(int x, int y){
	if(y==0){
		return 1;
	}else{
		return power(x,y-1)*x;
	}
}


int main() {
	int m,n;
	cin>>m>>n;
	cout << power(m,n);
}