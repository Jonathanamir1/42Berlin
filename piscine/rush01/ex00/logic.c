#include <stdio.h>

int print(char num);


int *logic(char *str)
{
/*
{"col1top", "col2top", "col3top" , "col4top", "col1bottom", 
"col2bottom" ,"col3bottom" ,"col4bottom", "row1left", 
"row2left", "row3left", "row4left", "row1right", "row2right", "row3right", "row4right"};
*/

//if 0 - 3 then top if3 - 7 bottom if 7 - 11 left if 11 - 15 right
	int i;
	int counter;

	i = 0;
	counter = 1;
	while (str[i] != '\0')
	{
		if ( str[i] != 32)
		{
			if (counter % 4 == 0 && counter != 0)
			{
				print(str[i]);
				print('\n');
			}
			else 
				print(str[i]);
			counter++;
		}
		i++;
	}
	return (0);

}
