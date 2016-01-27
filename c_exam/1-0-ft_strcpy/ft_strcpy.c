#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char t[10] = "abc";
	char t2[10] = "defg";

	ft_strcpy(t2, t);
	printf("%s", t2);
	return (0);
}

