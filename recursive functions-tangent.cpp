#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fact(int n){
	int f=1;
	while(n>1){
		f*=n;
		n--;
	}
	return f;
}

int power(int x,int y){
	int p=1;
	for (int i=1; i<=y; i++){
		p=p*x;
	}
	return p;
}



int main() {
  float N, S, C, T;
  
  cout<< "please enter number:";
  cin>>N;

  S=N-(power(N,3)/fact(3))+(power(N,5)/fact(5))-(power(N,7)/fact(7));

  C=1-(power(N,2)/fact(2))+(power(N,4)/fact(4))-(power(N,6)/fact(6));

  T=(float)S/C;

  cout<<T;
cout <<S;





}




