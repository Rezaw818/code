#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bmm (int x, int y){
	if(y==0){
		return x;
	}else{
		return bmm(y,x%y);
	}
}

int main() {
int x,y;
cout<<"please enter first number:";	
cin>>x;
cout<<"please enter second number smaller than first:";	
cin>>y;	
cout<<gcd(x,y);


}
