#include <iostream>
using namespace std;

double dik(double ,double );
double dai(double);
	double a,b,alan1,alan2,r;
	double pi=3.14;
int main (){
	int x;
	int process=0;

while(process==0){
cout<<"Asagidakilerden birini seciniz: "<<endl;
cout<<"1 : Dikdortgenin alani"<<endl;
cout<<"2 : Dairenin  alani"<<endl;
cout<<"3 : Programin sonu"<<endl;
cout<<"Seciminiz :";
cin>>x;



 switch(x){
  case 1: {
  	cout<<"Dikdortgenin 2 kenarini giriniz :";
  	cin>>a>>b;
   dik(a,b);
 break;
  }
  case 2: {
   cout << "Dairenin yaricapini giriniz :";
   cin>>r;
   dai(r);
break;
  }
  case 3: {
   cout << "Hoscakalin !";
   process=1;
   break;
  }
 
 }
 
}
}

double dik(double a,double b){
	alan1=a*b;
	cout<<"Alan ="<<alan1<<endl;
   return 0;
}

double dai(double r){
	alan2=pi*r;
	cout<<"Alan ="<<alan2<<endl;
	return 0;
}
