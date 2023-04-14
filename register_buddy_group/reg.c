#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10][25], pass[1], grp[20];
    char fname[25];
    int s = 0, cdwn = 9;

    printf("Enter 'r' to register your buddy group or 'q' to exit: \n");
    scanf("%s", pass);

    if (strcmp(pass, "r"))
    {
	puts("Do have a nice day");
	return -1;
    }
    puts("What is the name of your buddy group?\n(no space(s); just a word)");
    scanf("%s", grp);
    puts("\nYou may now register your members\n(maximum of 10)");

    while (s < 10)
    {
	puts("Enter the firstname or 'q' to stop:");
	scanf("%s", fname);
	strcpy(str[s], fname);

	if (cdwn == 1)
	    printf("\n%d chance left.\n", cdwn);
	else if (cdwn == 0)
	{
	    printf("\nYou have reached the max\n");
	    break;
	}
	else if (!strcmp(fname, "q"))
	{
	    strcpy(str[s], "\0");
	    break;
	}
	else
	    printf("\n%d chances left.\n", cdwn);
	s += 1;
	cdwn -= 1;
    }
    printf("\nDone with Registration!\n---\t---\t---\nRegistered Members of %s\n", grp);
    for (s = 0; s < 10; s++)
    {
	if (!strcmp(str[s], "\0"))
	    break;
	printf("%d. ", s+1);
	printf("%s\n", str[s]);
    }
    return (0);
}
