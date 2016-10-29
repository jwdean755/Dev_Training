
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
bool PromptForRequest(int *ipAge, int *iaCount);
//insert Doxygen here
bool ProvideResponse(int *ipAge, int *iaCount);
