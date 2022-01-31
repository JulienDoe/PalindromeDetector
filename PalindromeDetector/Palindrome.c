#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char taper_mot(char *mot)
{
	scanf("%s", mot);
	return mot;
}

bool palindrome(char *mot)
{
	size_t length = 0;
	while (mot[length] != '\0')
	{
		length++;
	}
	for (size_t i = 0; i < length; i++)
		if (mot[i] != mot[length - 1 - i])
			return false;
	return true;
}

int main(int argc, char *argv[])
{
	char mot[100];
	printf("Ce programme permet de detecter si le mot rentrer est un palindrome.\n"
		"Veuillez tapez le mot que vous souhaitez soumettre a la machine :");
	taper_mot(mot);
	if (palindrome(mot))
		printf("\nLe mot %s est un palindrome.\n", mot);
	else
		printf("\nLe mot %s n'est PAS un palindrome.\n", mot);

	return 0;
}