#define VERSION 0
#define SUBVERSION 0
#define SUBERVERSION 0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// compilation subprogram
// getting subprogram argc and argv
void compile(int sargc, char* sargv[])
{
	for(unsigned args_counter = 0; args_counter < sargc; ++args_counter)
	{
		printf("%s\n", sargv[args_counter]);
	}
}

// the main funcrion only
// calls the subprograms and 
// prints help or version
int main(int argc, char* argv[])
{
	bool job_is_done = false;
	if(argc == 1);
	else if(strcmp("version", argv[1]) == 0)
	{
		printf("version %d.%d.%d\n", VERSION, SUBVERSION, SUBERVERSION);
		job_is_done = true;
	}
	else if(strcmp("help", argv[1]) == 0)
	{
		printf("some help\n");
		job_is_done = true;
	}
	else if(strcmp("compile", argv[1]) == 0)
	{
		if(argc == 2) printf("No files mentioned!");
		else 
		{
			compile(argc - 2, &(argv[2]));
		}
		job_is_done = true;
	}
	
	if(!job_is_done)
	{
		printf("\nDidn't expect this?\n");
		printf("Type \"Roxylang help\" to get help\n");
	}
	return EXIT_SUCCESS;
}
