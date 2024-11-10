#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(0));
	int number=rand()%100+1;
	int num;
	bool found=false;
	while(!found){
		cout<<"Enter a number of your choice";
		cin>>num;
		//checks if the gueesed it right or wrong
		if(num<number){
			cout<<"Oops!!Your number is too low"<<endl;
			}
			if(num>number)
			cout<<"Oops!!Your number is too high"<<endl;
			if(num==number){
			found=true;
			cout<<"Congo!you guessed it correct.The number is "<<num<<endl;
		}
	}
	
}
