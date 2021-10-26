#include<stdio.h>
#include<unistd.h>
main()
{	
	char *argv[30];
	char buf[1024];
	int i,j;
	while(1)
	{
		for(i=0;argv[i]<30;i++)
		argv[i]='\0';
		for(i=0;buf[i]<1024;i++)
		buf[i]='\0';
		printf("my shell $");
		scanf("%s",buf);
		for(i=0,j=0;buf[j]!='\0';i++)
		{
			argv[i]=&buf[j]
			count++;
			for(j;buf[j]='\0';j++)
			{
				if(buf[j]==' ')
				{
					buf[j]='\0';
					j++;

					break;
				}
			}
		}
		ret=fork();
		char 
		
		if(ret==0)
		{
		execvp(argv[0],argv);
			
	
