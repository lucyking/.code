#include<stdio.h>
enum week{mon=1,tue,wed,thu,fri,sat,sun};
void main()
{
	enum week workday,holiday1,holiday2;
	char *string[]={" ","sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	printf("workday:\n");
	for(workday=mon;workday<sat;workday++)
		printf("%s \n",string[workday]);
}