/**
 * @file ExampleCCode.h
 * @author Dean
 * @date 29 Oct 2016
 * @brief This header file contains enum and function definitions for ExampleCCode project
 */

/**
 * @brief Contains and Documents Child's Response.
 */
typedef enum{
	NORESPONSE,
	MELTDOWN,
	SUCCESS
}RESPONSE;

/**
 * @brief Contains and Documents Parents's Response.
 */
typedef enum{
	LOLLIPOP = 1,
	BED = 2,
	BATH = 3,
	BRUSHTEETH = 4,
	EATDINNER = 5,
	REQUEST_SIZE = 5
}REQUESTS;


/**
 * @brief This function prompts user for age and for their request to the child
 *
 * @param[out]	ipAge	Contains the age of the child
 * @param[out]	iaQuestionCountList	Contains a count of all the Requests
 */
void PromptForAgeAndRequest(int *ipAge, int *iaQuestionCountList);

/**
 * @brief This function prompts the user for a response and handles that response.
 * This function keeps a count of responses, but currently only Lollipop is used
 * @param[in,out]	ipAge	Contains the age of the child
 * @param[in,out]	iaQuestionCountList	Contains a count of all the Requests
 * @return	defined response of Child
 */
RESPONSE ProvideResponse(int *ipAge, int *iaQuestionCountList);

/**
 * This function clears the input
 * param[out]	iResult	int result to ensure the last function call was successful
 */
void ClearInput(int iResult);
