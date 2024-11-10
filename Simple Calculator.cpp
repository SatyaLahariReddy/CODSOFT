#include <bits/stdc++.h>
using namespace std;
int main(){
	int num_1,num_2;
	char Operator;
	cout<<"Enter two numbers:"<<endl;
	cin>>num_1>>num_2;
	cout<<"Enter an operation to perform(+,-,*,/):"<<endl;
	cin>>Operator;
	switch(Operator){
		case '+':cout<<"The sum of two numbers "<<num_1<<" and "<<num_2<<" is "<<num_1+num_2<<endl;
		break;
		case '-':cout<<"The difference of two numbers "<<num_1<<" and "<<num_2<<" is "<<num_1-num_2<<endl;
		break;
		case '*':cout<<"The multiplication of two numbers "<<num_1<<" and "<<num_2<<" is "<<num_1*num_2<<endl;
		break;
		case '/':
		if(num_2!=0)
		cout<<"The division of two numbers "<<num_1<<" and "<<num_2<<" is "<<(float)num_1/num_2<<endl;
		else
		cout<<"Error!Divisiob by zero is not allowed!"<<endl;
		break;
		default:cout<<"Entered wrong choice"<<endl;
			
	}
}
