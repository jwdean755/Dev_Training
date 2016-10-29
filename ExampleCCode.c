#include <stdio.h>
#include "ExampleCCode.h"
int main()
{
	//TODO Insert Comments -- Create Functions
	//TODO Set up Cmake and folder structure
	List_Of_Questions enParentQuestion;
	int iAge = 0;
	bool bChildResponse = 0;
	while(0 == bChildResponse){
	       	enParentQuestion = PromptForQuestion(&iAge);
		bChildResponse = ProvideResponse(&enParentQuestion);
	}
	return 0;
}
