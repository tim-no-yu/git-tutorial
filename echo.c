/* echo.c - echo user input */
/* Tim Tian Yu */
/* Last updated: 1/9/2024 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char input[500];
	while(fgets(input, 500, stdin)){ //read from STDIN (aka command-line)
		printf("%s\n", input); //print out what user typed in
		memset(input, 0, strlen(input)); //reset string to all 0's
	}
	return 1;
}
