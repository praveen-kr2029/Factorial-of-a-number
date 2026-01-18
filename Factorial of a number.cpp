#include<iostream>
using namespace std;
int main(){
	int n;
	int factorial=1;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		factorial=factorial*i;
	}
	if (n==0){
		cout<<"Factorial "<<n<<" = "<<1;
	}
	else{
		cout<<"Factorial "<<n<<" = "<<factorial;
	}
}
