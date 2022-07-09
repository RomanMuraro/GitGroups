#include <iostream>
#include <cmath>

using namespace std;

int sqrt(int a){
	a = pow(a,2);
return a;}
int main(){
	cout<<" Hi! This is sqrt of number! "<<endl;
	int b;
	int c;
	cout<<"Enter the number"<<endl;
	cin>>b;
	c = b;
	b = sqrt(b);
	cout<<"Sqrt of"<<c<<"is"<<b<<endl;
	
return 0;}
