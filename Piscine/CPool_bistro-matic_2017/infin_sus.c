#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_revstr(char *str)
{
	int i;
	int tmp;
	int b;
	i = 0;
	b = 0;

	while (str[i] != '\0') {
		i++;
	}
	i--;
	while (i > b) {
		tmp = str[b];
		str[b] = str[i];
		str[i] = tmp;
		i--;
		b++;
	}
	return(str);
}

  int my_strlen(char const *str)
{
	int i;
	i = 0;

	while (str[i] != '\0') {
		i++;
	}

	return (i);
}

int cti(char c)
{
	return (c - 48);
}

char itc (int n)
{
	return (n + 48);
}

char *infin_add(char *s1, char *s2)
{
	int i = my_strlen(s1);
	int j = my_strlen(s2);
	int lg = 0;
	int cts1 = 0;
	int cts2 = 0;
	char calc;
	int cmp = 0;
	int ret = 0;

	if (i > j) {
	lg = i;
	cts2 = j;
	cts1 = lg;
	}		//switch
	else {
	lg = j;
	cts1 = i;
	cts2 = lg;
	}
	if (i == j)
	lg = i;
	char *res = malloc(sizeof(char) * (lg + 3));
	s1 = my_revstr(s1);
	s2 = my_revstr(s2);
	while (lg != 0) {
		if (cts1 <= 0)
		s1[cmp] = 48;
		if (cts2 <= 0)
		s2[cmp] = 48;
	calc = (cti(((s1[cmp]) - cti(s2[cmp])) - ret));
//	printf("%d", cti(s1[cmp]));
//	printf("%d\n", cti(s2[cmp]));
	ret = 0;
	if (calc < 0) {
		printf("%d\n", calc);
		calc += 10;
		calc = (calc % 10);
			printf("%d\n", calc);
		ret++;
	}
	res[cmp] = itc(calc);
	if (cts2 == 1)
		res[cmp + 1] = res[cmp] - itc(ret); 
	cmp++;
	lg--;
	cts1--;
	cts2--;
	}	
	res = my_revstr(res);
//	printf("%s\n", res);
	return (res[0] == '0' ? res + 1 : res);
}
