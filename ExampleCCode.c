#include <stdio.h>
#include "ExampleCCode.h"
int main()
{
	//TODO Insert Comments -- Create Functions
	//TODO Set up Cmake and folder structure
	//Initialize the question count to the size of the REQUESTS enum
	int iaQuestionCountList[REQUEST_SIZE]; 
	int iAge = 0;
	RESPONSE enChildResponse = NORESPONSE;
	while(NORESPONSE == bChildResponse){
	       	enParentRequest = PromptForRequest(&iAge);
		bChildResponse = ProvideResponse(&enChildResponse, iaQuestionCountList);
	}
	return 0;
}
