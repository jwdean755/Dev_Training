/**
 * @file ExampleCCode.c
 * @author Dean
 * @date 29 Oct 2016
 * @brief File containing ExampleCCode
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
	       	iReturn = PromptForAgeAndRequest(&iAge, iaQuestionCountList);
		enChildResponse = ProvideResponse(&iAge, iaQuestionCountList);
	}
	if(SUCCESS == enChildResponse){
		printf("Parenting Success\n");
	}else{
		printf("WAAAAAAAAAAAAAAAAAAAAAAA!!!!\n");
	}
	return 0;
}


void PromptForAgeAndRequest(int *ipAge, int *iaQuestionCountList){
	//If Age is 0 Ask for age of child
	int iResult = EOF;
	int iTempResult = 0;
	if(0 == *ipAge){
		while(EOF == iResult){
			printf("What age is your child?:\n");
			iResult = scanf("%d", ipAge);
			//Absorb number input for age
			if (iResult == EOF || 1 > *ipAge) {
	    			printf("There was an error, \nPlease try your input again\n");
			}
		}
	}
	//Present Menu
	//Absorb iaQiestionCountList
	iResult = EOF;
	while(EOF == iResult){
		printf("Please enter a menu number and press enter:\n"
			"1.  Give the Child Candy\n"
			"2.  Go To Bed!!\n"
			"3.  Take a Bath!!\n"
			"4.  Brush Your Teeth!!\n"
			"5.  Eat Your Dinner!!\n");
		iResult = scanf("%d", &iTempResult);
		ClearInput(iResult);
		if (iResult == EOF || 5 < iTempResult || 1 > iTempResult){
			iResult == EOF;
	    		printf("There was an error, \nPlease try your input again\n");
		}
	}
	iaQuestionCountList[iTempResult]++;
}
RESPONSE ProvideResponse(int *ipAge, int *iaQuestionCountList){
	RESPONSE enChildResponse = NORESPONSE;

	//if age is above 13 set child response to MELTDOWN
	if(14 < *ipAge && 23 > *ipAge){
		enChildResponse = MELTDOWN;
	}

	//else if age is above 22, success
	else if(22 < *ipAge){
		enChildResponse = SUCCESS;
	}

	//else if iaQuestionCountList[LOLLIPOP] >= *ipAge, set response to SUCCESS
	else if(iaQuestionCountList[LOLLIPOP] >= *ipAge){
		enChildResponse = SUCCESS;
	}

	//else if age below 3 set enChildResponse to MELTDOWN
	else if(3 > *ipAge){
		enChildResponse = MELTDOWN;
	}

	return enChildResponse;
}


void ClearInput(int iResult){
	if (0 == iResult){
		    while (fgetc(stdin) != '\n'); // Read until a newline is found
	}
}
