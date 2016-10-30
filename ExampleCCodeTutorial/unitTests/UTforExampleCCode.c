#include <stdio.h>
#include "../include/ExampleCCode.h"

#define SUCCESS 0
#define FAILURE 1

int InputAge14();
int InputAge13();
int InputAge22();
int InputAge23();
int InputAge2();
int InputAge4And3Candy();
int InputAge5And5Candy();
int InputAge10And14Candy();
int InputAge10And10Candy();
int InputAge10And9Candy();

int main(){
	int iReturn = 0;
	iReturn += InputAge2();
	iReturn += InputAge13();
	iReturn += InputAge12();
	iReturn += InputAge22();
	iReturn += InputAge23();
	iReturn += InputAge4And3Candy();
	iReturn += InputAge5And5Candy();
	iReturn += InputAge10And14Candy();
	iReturn += InputAge10And10Candy();
	iReturn += InputAge10And9Candy();
	if(SUCCESS == iReturn){
		printf("!!!All Tests Passed!!!\n\n");
	}else{
		printf("%d tests Failed:(\n\n", iReturn);
	}
}

int InputAge2(){
	int iAge = 2;
	int iaQuestionCountList[REQUEST_SIZE];
	if(MELTDOWN == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge2 SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge2 FAILURE\n");
		return FAILURE;

	}
}

int InputAge13(){
	int iAge = 13;
	int iaQuestionCountList[REQUEST_SIZE];
	if(MELTDOWN == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge13 SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge13 FAILURE\n");
		return FAILURE;

	}
}

int InputAge12(){
	int iAge = 12;
	int iaQuestionCountList[REQUEST_SIZE];
	if(NORESPONSE == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge12 SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge12 FAILURE\n");
		return FAILURE;
	}
}

int InputAge22(){
	int iAge = 22;
	int iaQuestionCountList[REQUEST_SIZE];
	if(MELTDOWN == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge22 SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge22 FAILURE\n");
		return FAILURE;
	}
}

int InputAge23(){
	int iAge = 23;
	int iaQuestionCountList[REQUEST_SIZE];
	if(CHILDSUCCESS == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge23 SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge23 FAILURE\n");
		return FAILURE;
	}
}

int InputAge4And3Candy(){
	int iAge = 4;
	int iaQuestionCountList[REQUEST_SIZE];
	iaQuestionCountList[CANDY] = 3;
	if(NORESPONSE == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge4And3Candy SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge4And3Candy FAILURE\n");
		return FAILURE;
	}
}

int InputAge5And5Candy(){
	int iAge = 5;
	int iaQuestionCountList[REQUEST_SIZE];
	iaQuestionCountList[CANDY] = 5;
	if(CHILDSUCCESS == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge5And5Candy SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge5And5Candy FAILURE\n");
		return FAILURE;
	}
}

int InputAge10And10Candy(){
	int iAge = 10;
	int iaQuestionCountList[REQUEST_SIZE];
	iaQuestionCountList[CANDY] = 10;
	if(CHILDSUCCESS == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge10And10Candy SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge10And10Candy FAILURE\n");
		return FAILURE;
	}
}

int InputAge10And9Candy(){
	int iAge = 10;
	int iaQuestionCountList[REQUEST_SIZE];
	iaQuestionCountList[CANDY] = 9;
	if(NORESPONSE == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge10And9Candy SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge10And9Candy FAILURE\n");
		return FAILURE;
	}
}

int InputAge10And14Candy(){
	int iAge = 10;
	int iaQuestionCountList[REQUEST_SIZE];
	iaQuestionCountList[CANDY] = 14;
	if(CHILDSUCCESS == ProvideResponse(&iAge, iaQuestionCountList)){
		printf("InputAge10And14Candy SUCCESS\n");
		return SUCCESS;
	}else{
		printf("InputAge10And14Candy FAILURE\n");
		return FAILURE;
	}
}
