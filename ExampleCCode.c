#include <stdio.h>
#include "ExampleCCode.h"
int main()
{
	//TODO Insert Comments -- Create Functions
	//TODO Set up Cmake and folder structure
	//Initialize the question count to the size of the REQUESTS enum
	int iaQuestionCountList[REQUEST_SIZE];
	int iAge = 0;
	int iReturn = 1;
	RESPONSE enChildResponse = NORESPONSE;
	while(NORESPONSE == bChildResponse){
	       	iReturn = PromptForRequest(&iAge, iaQuestionCountList);
		bChildResponse = ProvideResponse(&enChildResponse, iaQuestionCountList);
	}
	return 0;
}


int PromptForRequest(int *iAge, int *iaQuestionCountList){
	//If Age is 0 Ask for age of child
		//Absorb number input for age
	//Present Menu
	//Absorb number input
	//Set Proper iaQuestionCountList
	return 0;
}
RESPONSE ProvideResponse(int *ipAge, int *iaQuestionCountList){
	//If age below 3 set enChildResponse to MELTDOWN
	//else if age is above 13 set child response to MELTDOWN
	//else if iaQuestionCountList[LOLLIPOP]*3 >= *ipAge, set response to SUCCESS
	//else set enChildResponse to SUCCESS
	return enChildResponse;
}

