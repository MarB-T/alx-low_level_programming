#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPassword - generates random password
 * @n: Length of password
 */
void randomPassword(int n)
{
	int i = 0;
	int randomizer = 0;
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = ".~,><!@#$^&*?";
	char password[n];

	srand((unsigned int)(time(NULL)));

	randomizer = rand() % 4;

	for (i = 0; i < n; i++) {

		if (randomizer == 1) {
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) {
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3) {
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main()
{
	int n = 10;

	randomPassword(n);

	return 0;
}

