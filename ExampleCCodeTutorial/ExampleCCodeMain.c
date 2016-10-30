/**
 * @file ExampleCCodeMain.c
 * @author Dean
 * @date 29 Oct 2016
 * @brief File containing main of ExampleCCode
 *
 */
#include <stdio.h>
#include "ExampleCCode.h"
int main(){
	//Initialize the question count to the size of the REQUESTS enum
	int iaQuestionCountList[REQUEST_SIZE];
	int iAge = 0;
	int iReturn = 1;
	RESPONSE enChildResponse = NORESPONSE;
	while(NORESPONSE == enChildResponse){
	       	PromptForAgeAndRequest(&iAge, iaQuestionCountList);
		enChildResponse = ProvideResponse(&iAge, iaQuestionCountList);
	}
	if(CHILDSUCCESS == enChildResponse){
		printf("Parenting Success\n");
	}else{
		printf("WAAAAAAAAAAAAAAAAAAAAAAA!!!!\n");
	}
	return 0;
}


