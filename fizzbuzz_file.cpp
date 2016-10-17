#include<iostream>
#include<fstream>
using namespace std;
main(){
	
	ifstream f("input.txt");
	int g;
	while(f>>g){
		if((g%3==0)&&(g%5==0)){
			cout<<"FizzBuzz\n";
		}
		else if(g%5==0){
			cout<<"Buzz\n";
		}
		else if(g%3==0){
			cout<<"Fizz\n";
		}
		else{
			cout<<g<<endl;
		}
	}
}
