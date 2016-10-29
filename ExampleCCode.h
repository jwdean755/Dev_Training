
//Insert Doxygen Here
typedef enum {
	BED,
	BATH,
	BRUSHTEETH,
	EATDINNER
}List_Of_Questions;

//Insert Doxygen here
List_Of_Questions PromptForQuestion(int *ipAge);
//insert Doxygen here
bool ProvideResponse(List_Of_Questions *enParentQuestion);
