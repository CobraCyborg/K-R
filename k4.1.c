#include <stdio.h>

int getl(char s[], int lim);
int strindex(char s[], char p[]);

int main(void)
{
	char pattern[] = "ou";
	char str[1000] = { 0 };

	while (getl(str, sizeof str) != 0) {
		printf("%d\n", strindex(str, pattern));
	}
	return 0;
}

int getl(char s[], int lim)
{
	for (int i = 0; i < lim && (s[i] = getchar()) != EOF; i++)
	{
		if (s[i] == '\n') {
			s[++i] = '\0';
			return 1;
		}
	}
	return 0;
}

int strindex(char s[], char p[])
{
	int i, j, k, found;
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; p[k] != '\0' && s[j] == p[k]; j++, k++)
			;
		if (k > 0 && p[k] == '\0')
			found = i;
	}
	if (found > 0)
		return found;
	else
		return -1;
}
// teset str "Ah Love! could you and I with Fate conspire could"