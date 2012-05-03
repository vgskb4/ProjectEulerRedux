#include<iostream>
#include<iomanip>

#include "CollatzSeq.hpp"


int main()
{
	int maxNum;
	int maxNumSteps=0;
	int numSteps;
	for(unsigned int i=1; i<=1000000; ++i){
		numSteps=0;
		GenerateSeq(i,numSteps);
		if (numSteps>maxNumSteps){
			maxNum=i;
			maxNumSteps=numSteps;
		}
	}
	std::cout << maxNum <<std::endl;
	std::cout << maxNumSteps <<std::endl;
	return 0;
}

