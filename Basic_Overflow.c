#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This function tests the user entered password and if it matches "123ABCdef." sets the auth_flag
//
// Parameter(s):
// password - A string to be tested for password validity
//
// Return:
// An int flag of 1 if the password is valid else return 0
int auth(char* password){
	int auth_flag = 0;
	char password_buffer[20];
	

	strcpy(password_buffer, password);

	if(strcmp(password_buffer, "123ABCdef.") == 0){
		auth_flag = 1;
	}

return auth_flag;
}

// Basic Overflow main function
int main(int argc, char* argv[]){

	//If the user does not enter a password to be tested
	if(argc < 2){
		printf("ERROR: No password to be tested\n");
		printf("%s <password>\n", argv[0]);
		exit(0);
	}

	//Tests the first string after the executable and prints whether it is a valid password or not
	if( auth(argv[1]) ){
		printf("----------------------\n");
		printf("Correct password given\n");
		printf("----------------------\n");
	}
	else{
		printf("------------------------\n");
		printf("Incorrect password given\n");
		printf("------------------------\n");
	}

return 0;
}