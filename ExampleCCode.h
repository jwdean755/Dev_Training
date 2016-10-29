
//insert Doxygen here
typedef enum{
	NORESPONSE,
	MELTDOWN,
	SUCCESS
}RESPONSE;


typedef enum{
	LOLLIPOP,
	BED,
	BATH,
	BRUSHTEETH,
	EATDINNER,
	REQUEST_SIZE
}REQUESTS;

//insert Doxygen here

//insert Doxygen here
int PromptForRequest(int *iAge, int *iaQuestionCountList);
//insert Doxygen here
int ProvideResponse(int *ipAge, int *iaCount);
