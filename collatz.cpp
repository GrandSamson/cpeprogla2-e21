#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main ()
{
	int collatz,fNum,sNum, cycleLength, maxcycleLength;	
	ifstream f("input.txt");
	while(f >> fNum >> sNum){
	
		int fNum2, sNum2;
		fNum2 = fNum<=sNum ? fNum:sNum;
		sNum2 = fNum<=sNum ? sNum:fNum; 
		cycleLength=0;
		maxcycleLength=0;		
		for(int value=fNum2; value<=sNum2; value++)
		{
			cycleLength=0;
			int value2=value;			
			while(value2 !=1 )
			{
				if(value2%2 ==1) { value2 = value2*3 +1; cycleLength++;	}
				else { value2 /= 2;	cycleLength++;	}
			}
			cycleLength++;
			if(cycleLength>maxcycleLength) maxcycleLength = maxcycleLength=cycleLength;
		}		
		cout << fNum << " " << sNum << " " << maxcycleLength << "\n";
	}
	
	}
	
	
