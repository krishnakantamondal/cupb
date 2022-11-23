#include <stdio.h>
#define k 25
main ()

{
	int i=0, j=0;
	char name[k], title[k];
	printf("Enter your Name and Title: \t ");
	scanf("%s%s", name, title);

	printf("You have entered:\t%s \b %s \n", name, title);

	while(name[i] != '\0')
		i +=1;
	
	while(title[j] != '\0')
		j +=1;
	printf("Total letters in your name is %d\n", i);
	printf("Total letters in your title is %d\n", j);


	printf("Your name starts with %c and title starts with %c\n", name[0], title[0]);

	printf("Your name ends with %c and title ends with %c\n", name[i-1], title[j-1]);


}
