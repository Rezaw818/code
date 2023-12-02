#include <iostream>

using namespace std;

main() {
float M;
cout<<"please enter your Wages  :  ";
cin>>M;
  if(M<6){ 
  	cout<<"Your Wages is  :  "<<M;
  }
  else if(M>=6  &&  M<8){
  	 M=M-(0.05*M);
  	cout<<"Your Wages is  :  "<<M;
  }
  else if(M>=8  &&  M<10){
  	 M=M-(0.10*M);
  	cout<<"Your Wages is  :  "<<M;
  }
  else if(M>=10  &&  M<14){
  	 M=M-(0.15*M);
  	cout<<"Your Wages is  :  "<<M;
  }
  else if(M>=14  &&  M<18){
  	 M=M-(0.20*M);
  	cout<<"Your Wages is  :  "<<M;
  }
  else if(M>=18  &&  M<25){ 
     M=M-(0.25*M);
   	cout<<"Your Wages is  :  "<<M;
  } 
  else{ 
     M=M-(0.35*M);
   	cout<<"Your Wages is  :  "<<M;
  }
}
