#ifndef _COLLATZ_SEQ_H_
#define _COLLATZ_SEQ_H_
#include <iostream>

void GenerateSeq(const unsigned int &i, int &numSteps)
{
	//std::cout << i << std::endl;
	if(i==1)
	{
		return;
	}
	++numSteps;
	if((i&1)==0){
		return GenerateSeq(i/2,numSteps);
	}
	return GenerateSeq(3*i+1,numSteps);
}

#endif
