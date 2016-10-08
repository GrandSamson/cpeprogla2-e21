#include <iostream>
#include <fstream>
using namespace std;

int main()
{	
	int i,j;
	ifstream f("input.txt");
     int answer = 0;
     while(f>>j){
	 
     for (i = 0; i < j; i++){
          if ((i%3 == 0) || (i%5 == 0)) 
		  {answer += i;}
     }
     }
     cout << answer << endl;
     return 0;
}
