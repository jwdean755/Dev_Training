
//insert Doxygen here
typedef enum{
	NORESPONSE,
	MELTDOWN,
	SUCCESS
}RESPONSE;


typedef enum{
	LOLLIPOP = 1,
	BED = 2,
	BATH = 3,
	BRUSHTEETH = 4,
	EATDINNER = 5,
	REQUEST_SIZE = 5
}REQUESTS;

//insert Doxygen here

//insert Doxygen here
int PromptForRequest(int *iAge, int *iaQuestionCountList);
//insert Doxygen here
RESPONSE ProvideResponse(int *ipAge, int *iaQuestionCountList);

void ClearInput(int iResult);
