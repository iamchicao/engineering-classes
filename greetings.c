#include <stdio.h>

void main() {
	//Start variables with initial state
	char first_name[30];
	char last_name[30];
	char country[30];
	char favorite_team[30];
	int  age;
	
	//printf - print on the screen
	printf("Type your first name: ");
	//scanf get input date of user
	//%s - tells you which variable to store the information
	scanf("%s", first_name);
	
	printf("Type your last name: ");
	scanf("%s", last_name);
	
	printf("Type your age: ");
	//%d - decimal
	//%i - intereger
	scanf("%d", &age);	
	
	printf("And now, type your favorite team of soccer or basketball: ");
	scanf("%s", favorite_team);
	
	printf("Are you from? Type your country: ");
	scanf("%s", country);
	
	//stricat() - function for concatenate sting
	printf("Welcome the New World %s %s !\n", first_name, last_name);
	printf("Your favorite team is %s .\n", favorite_team);
	printf("And your country is a %s .\n ", country);
	printf("Your age is %d .\n", age);
	
};
