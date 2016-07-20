#include "mylib.h"
int main()
{
	int status;
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		pid_t pid2 = fork();
	}
	else 
	{
		pid_t pid1;
		pid1 = fork();
		if (pid1 == 0)
		{
			pid_t pid3 = fork();
			if (pid3 !=0)
			{
				pid_t pid4 = fork();
			}
		}
	}
	sleep(10);
	wait(&status);
	printf("%d %d\n",getpid(),getppid());
	return 0;
}