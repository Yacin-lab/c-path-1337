#include <stdio.h>

int	main(void)
{
	int     scores[100];
	int	students_number = 0;
	int	index = 0;

	do{
		printf("\n------------------------------\n Enter negative value to exit.\n");
		printf(" how many scores? ");
		scanf("%d", &students_number);
		if(students_number < 0)
			continue;
		printf(" scores: ");
		while(index < students_number)
		{
			scanf(" %d", &scores[index]);
			index++;
		}

	} while(students_number >= 0);
	printf("\n%d\n", scores[1]);
	return (0);
}
