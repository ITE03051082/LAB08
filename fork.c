#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,pid,status=0;

	for(i=0;i<3;i++)
	{
		pid = fork();
		if(pid != 0)
		{
			printf("\nParent\n");
			printf("PID=%d\n",getpid());
			pid = wait(&status);
		}
		else
		{
			printf("\nChild\n");
			printf("PID=%d\n",getpid());
			printf("PPID=%d\n",getppid());
			exit(status);
		}
	}
}
