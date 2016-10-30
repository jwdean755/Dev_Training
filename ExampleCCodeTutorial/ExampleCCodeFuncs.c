/**
 * @file ExampleCCodeFuncs.c
 * @author Dean
 * @date 29 Oct 2016
 * @brief File containing functions for ExampleCCode
 *
 */
#include <stdio.h>
#include "ExampleCCode.h"


void PromptForAgeAndRequest(int *ipAge, int *iaQuestionCountList){
	//If Age is 0 Ask for age of child
	int iResult = EOF;
	int iTempResult = 0;
	if(0 == *ipAge){
		while(EOF == iResult){
			printf("What age is your child?:\n");
			iResult = scanf("%d", ipAge);
			ClearInput(iResult);
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

	//if age is between 13 and 22 set child response to MELTDOWN
	if(12 < *ipAge && 23 > *ipAge){
		enChildResponse = MELTDOWN;
	}

	//else if age is above 22, success
	else if(22 < *ipAge){
		enChildResponse = CHILDSUCCESS;
	}

	//else if iaQuestionCountList[CANDY] >= *ipAge, set response to CHILDSUCCESS
	else if(iaQuestionCountList[CANDY] >= *ipAge){
		enChildResponse = CHILDSUCCESS;
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
