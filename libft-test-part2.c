#include  "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static char	f(unsigned int n, char s)
{
	n = 32;
	if (s >= 'a' && s <= 'z')
	{
		return (s - n);
	}
	return (s);
}

int     main()
{
	printf("\n\n\033[1;38;5;213m	   LIBFT TESTER PART 2 - HERE WE GO! \n\n\033[0m");

		/***************************************/
	/****************** ft_substr ******************/
		/***************************************/

	/* FT_SUBSTR
		Allocates (with malloc(3)) and returns a new string, which
		is the result of the concatenation of ’s1’ and ’s2’.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;40m		~~ FT_SUBSTR TESTER ~~\033[0m\n\n");

	char	s[] = "youTOTALLYrule";
	char	s1[] = "";
	char	res1[] = "TOTALLY";
	char	*ptr;

	/* Test 1 */

	ptr = ft_substr(s, 3, 7);

	if (strncmp(ptr, res1, sizeof(res1)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("middle sub\n");
	free(ptr);

	/* Test 2 */

	char	res2[] = "youTOTALLYrule";
	ptr = ft_substr(s, 0, sizeof(s));

	if (strncmp(ptr, res2, sizeof(res2)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("entire string\n");
	free(ptr);

	/* Test 3 */

	char	res3[] = "you";
	ptr = ft_substr(s, 0, 3);

	if (strncmp(ptr, res3, sizeof(res3)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("beginning sub\n");
	free(ptr);

	/* Test 4 */

	char	res4[] = "rule";
	ptr = ft_substr(s, 10, 4);

	if (strncmp(ptr, res4, sizeof(res4)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("end sub\n");
	free(ptr);

	/* Test 5 */

	char	res5[] = "";
	ptr = ft_substr(s, 0, 0);

	if (strncmp(ptr, res5, sizeof(res5)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("0 start and 0 len\n");
	free(ptr);

	/* Test 6 */

	char	res6[] = "";
	ptr = ft_substr(s, 1, 0);

	if (strncmp(ptr, res6, sizeof(res6)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("0 len\n");
	free(ptr);

	/* Test 7 */

	char	res7[] = "TOTALLYrule";
	ptr = ft_substr(s, 3, 18);

	if (strncmp(ptr, res7, sizeof(res7)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("len greater than s\n");
	free(ptr);

	/* Test 8 */

	char	res8[] = "";
	ptr = ft_substr(s, 18, 3);

	if (strncmp(ptr, res8, sizeof(res8)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("start greater than s\n");
	free(ptr);

	/* Test 9 */

	char	res9[] = "";
	ptr = ft_substr(s1, 3, 7);

	if (strncmp(ptr, res9, sizeof(res9)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("empty string\n");
	free(ptr);

	/* Test 10 */

	char	*s2;
	s2 = NULL;
	ptr = ft_substr(s2, 3, 7);

	if (ptr == NULL)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("null test\n");
	free (ptr);

		/***************************************/
	/****************** ft_strjoin ******************/
		/***************************************/

	/* FT_STRJOIN
		Allocates (with malloc(3)) and returns a new string, which
		is the result of the concatenation of ’s1’ and ’s2’.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;41m		~~ FT_STRJOIN TESTER ~~\033[0m\n\n");

	/* Test 1 */

	char	str[] = "Stella ";
	char	str1[] = "Barra";
	char	check[] = "Stella Barra";

	ptr = ft_strjoin(str, str1);

	if (strncmp(ptr, check, sizeof(check)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic test #1\n");
	free(ptr);

	/* Test 2 */
	
	char	str2[] = "Katsu-Ya";
	char	check1[] = "Katsu-YaYa";

	ptr = ft_strjoin(str2, str2 + 6);

	if (strncmp(ptr, check1, sizeof(check1)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic test #2\n");
	free(ptr);

	/* Test 3 */

	char	str3[] = "Studio";
	char	str4[] = "City";
	char	check2[] = "City";

	str3[0] = '\0';

	ptr = ft_strjoin(str3, str4);

	if (strncmp(ptr, check2, sizeof(check2)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic test #3\n");
	free(ptr);

	/* Test 4 */

	char	str5[] = "";
	char	str6[] = "";
	char	check3[] = "";

	ptr = ft_strjoin(str5, str6);

	if (strncmp(ptr, check3, sizeof(check3)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");
	free(ptr);
	
	/* Test 5 */

	char	*ptr1;
	char	str7[] = "Holly Drive";

	ptr1 = NULL;

	ptr = ft_strjoin(ptr1, str7);

	if (ptr == NULL)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("function protection\n");
	free(ptr);

		/***************************************/
	/****************** ft_strtrim ******************/
		/***************************************/
	
	/* FT_STRTRIM
		Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
		specified in ’set’ removed from the beginning and the end of the string.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;42m		~~ FT_STRTRIM TESTER ~~\033[0m\n\n");

	/* Test 1 */

	const char	trim[] = "abccbacbNICE WORK!cbbabacaba";
	const char	trimset[] = "abc";
	char		trimres[] = "NICE WORK!";
	char		*strim;

	strim = ft_strtrim(trim, trimset);
	if (strncmp(strim, trimres, sizeof(trimres)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("trim both ends\n");
	free(strim);

	/* Test 2 */

	const char	trim2[] = "abbbbababba";
	const char	trimset2[] = "ab";
	char		trimres2[] = "";

	strim = ft_strtrim(trim2, trimset2);
	if (strncmp(strim, trimres2, sizeof(trimres2)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("trim all\n");
	free(strim);

	/* Test 3 */

	const char	trim3[] = "abbbCkppTHAT'S IT!";
	const char	trimset3[] = "pCkab";
	char		trimres3[] = "THAT'S IT!";

	strim = ft_strtrim(trim3, trimset3);
	if (strncmp(strim, trimres3, sizeof(trimres3)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("trim beginning\n");
	free(strim);

	/* Test 4 */

	const char	trim4[] = "THAT'S IT!abbbCkpp";
	const char	trimset4[] = "pCkab";
	char		trimres4[] = "THAT'S IT!";

	strim = ft_strtrim(trim4, trimset4);
	if (strncmp(strim, trimres4, sizeof(trimres4)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("trim end\n");
	free(strim);

	/* Test 5 */ 

	const char	trim5[] = "THAT'S IT!abbbCkpp!";
	const char	trimset5[] = "pCkab";
	char		trimres5[] = "THAT'S IT!abbbCkpp!";

	strim = ft_strtrim(trim5, trimset5);
	if (strncmp(strim, trimres5, sizeof(trimres5)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("no trim\n");
	free(strim); 

	/* Test 6 */

	const char	trim6[] = "!abbbCkppTHAT'S IT!";
	const char	trimset6[] = "pCkab";
	char		trimres6[] = "!abbbCkppTHAT'S IT!";

	strim = ft_strtrim(trim6, trimset6);
	if (strncmp(strim, trimres6, sizeof(trimres6)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("no trim\n");
	free(strim); 

	/* Test 7 */

	const char	trim7[] = "HOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!";
	const char	trimset7[] = "";
	char		trimres7[] = "HOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!";

	strim = ft_strtrim(trim7, trimset7);
	if (strncmp(strim, trimres7, sizeof(trimres7)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("set empty\n");
	free(strim);

	/* Test 8 */

	const char	trim8[] = "\n\t \nHOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!\n \t   ";
	const char	trimset8[] = "\n\t ";
	char		trimres8[] = "HOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!";

	strim = ft_strtrim(trim8, trimset8);
	if (strncmp(strim, trimres8, sizeof(trimres8)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("set is whitespace\n");
	free(strim);

	/* Test 9 */

	const char	trim9[] = "HOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!\n \t   ";
	const char	trimset9[] = "\n\t ";
	char		trimres9[] = "HOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!";

	strim = ft_strtrim(trim9, trimset9);
	if (strncmp(strim, trimres9, sizeof(trimres9)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("set is whitespace\n");
	free(strim);

	/* Test 10 */

	const char	trim10[] = "\n\t \nHOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!";
	const char	trimset10[] = "\n\t ";
	char		trimres10[] = "HOLY COW IF YOU CAN SEE THIS YOU RUUULLLEE!";

	strim = ft_strtrim(trim10, trimset10);
	if (strncmp(strim, trimres10, sizeof(trimres10)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("set is whitespace\n");
	free(strim);

	/* Test 11 */

	const char	*trim11;
	const char	trimset11[] = "abc";
	
	trim11 = NULL;
	strim = ft_strtrim(trim11, trimset11);
	if (strim == NULL)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("s is null\n");
	free(strim);   

		/***************************************/
	/****************** ft_split ******************/
		/***************************************/

	/* FT_SPLIT
		Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ 
		using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
	*/
	
	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;43m		~~ FT_SPLIT TESTER ~~\033[0m\n\n");

	/* Test 1 */

	char	**str8;
	char	check4[] = "Split";
	char	check5[] = "this";
	char	check6[] = "shit!";
	int		i;
	int		j;

	str8 = ft_split("Split this shit!", ' ');

	i = 0;
	while (str8[i] != NULL)
		i++;

	if (strncmp(check4, str8[0], sizeof(check4)) == 0 &&
		strncmp(check5, str8[1], sizeof(check5)) == 0 &&
		strncmp(check6, str8[2], sizeof(check6)) == 0 &&
		str8[3] == NULL && i == 3)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic test\n");
	
	j = 0;
	while (str8[j] != NULL)
	{
		free(str8[j]);
		j++;
	}

	/* Test 2 */

	char	check7[] = " ";
	char	check8[] = " Los	";
	char	check9[] = "ngeles";

	str8 = ft_split("@ @ Los	@ngeles@@", '@');

	i = 0;
	while (str8[i] != NULL)
		i++;

	if (strncmp(check7, str8[0], sizeof(check7)) == 0 &&
		strncmp(check8, str8[1], sizeof(check8)) == 0 &&
		strncmp(check9, str8[2], sizeof(check9)) == 0 &&
		str8[3] == NULL && i == 3)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("delimiters front back\n");

	j = 0;
	while (str8[j] != NULL)
	{
		free(str8[j]);
		j++;
	}

	/* Test 3 */

	char	check10[] = "Crossroads Kitchen";

	str8 = ft_split("Crossroads Kitchen", 'x');

	i = 0;
	while (str8[i] != NULL)
		i++;

	if (strncmp(check10, str8[0], sizeof(check10)) == 0 && str8[1] == NULL && i == 1)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("no delimiter in str\n");

	j = 0;
	while (str8[j] != NULL)
	{
		free(str8[j]);
		j++;
	}

	/* Test 4 */

	char	check11[] = "	";
	char	check12[] = "	";
	char	check13[] = "	";


	str8 = ft_split("	 	 	", ' '); // [tab][space][tab][space][tab]

	i = 0;
	while (str8[i] != NULL)
		i++;

	if (strncmp(check11, str8[0], sizeof(check11)) == 0 &&
		strncmp(check12, str8[1], sizeof(check12)) == 0 &&
		strncmp(check13, str8[2], sizeof(check13)) == 0 &&
		str8[3] == NULL && i == 3)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("whitespace test\n");

	j = 0;
	while (str8[j] != NULL)
	{
		free(str8[j]);
		j++;
	}

	/* Test 5 */

	str8 = ft_split("        ", ' '); // [8 * spaces]

	i = 0;
	while (str8[i] != NULL)
		i++;

	if (str8[0] == NULL && i == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("str all delimiter\n");

	j = 0;
	while (str8[j] != NULL)
	{
		free(str8[j]);
		j++;
	}

		/***************************************/
	/****************** ft_itoa ******************/
		/***************************************/

	/* FT_ITOA
		Allocates (with malloc(3)) and returns a string representing the 
		integer received as an argument. Negative numbers must be handled.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;44m		~~ FT_ITOA TESTER ~~\033[0m\n\n");

	/* Test 1 */

	char	*stritoa;
	char	resitoa[] = "0";
	stritoa = ft_itoa(0);

	if (strncmp(stritoa, resitoa, sizeof(resitoa)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("zero\n");
	free(stritoa);

	/* Test 2 */

	char	resitoa2[] = "9";
	stritoa = ft_itoa(9);

	if (strncmp(stritoa, resitoa2, sizeof(resitoa2)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("positive\n");
	free(stritoa);

	/* Test 3 */

	char	resitoa3[] = "-9";
	stritoa = ft_itoa(-9);

	if (strncmp(stritoa, resitoa3, sizeof(resitoa3)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("negative\n");
	free(stritoa);

	/* Test 4 */

	char	resitoa4[] = "10";
	stritoa = ft_itoa(10);

	if (strncmp(stritoa, resitoa4, sizeof(resitoa4)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("positive\n");
	free(stritoa);

	/* Test 5 */

	char	resitoa5[] = "-10";
	stritoa = ft_itoa(-10);

	if (strncmp(stritoa, resitoa5, sizeof(resitoa5)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("negative\n");
	free(stritoa);

	/* Test 6 */

	char	resitoa6[] = "8124";
	stritoa = ft_itoa(8124);

	if (strncmp(stritoa, resitoa6, sizeof(resitoa6)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("positive\n");
	free(stritoa);

	/* Test 7 */

	char	resitoa7[] = "-9874";
	stritoa = ft_itoa(-9874);

	if (strncmp(stritoa, resitoa7, sizeof(resitoa7)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("negative\n");
	free(stritoa);

	/* Test 8 */

	char	resitoa8[] = "543000";
	stritoa = ft_itoa(543000);

	if (strncmp(stritoa, resitoa8, sizeof(resitoa8)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("positive\n");
	free(stritoa);

	/* Test 9 */

	char	resitoa9[] = "-2147483648";
	stritoa = ft_itoa(-2147483648LL);

	if (strncmp(stritoa, resitoa9, sizeof(resitoa9)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("negative max\n");
	free(stritoa);

	/* Test 10 */

	char	resitoa10[] = "2147483647";
	stritoa = ft_itoa(2147483647);

	if (strncmp(stritoa, resitoa10, sizeof(resitoa10)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("positive max\n");
	free(stritoa);

		/***************************************/
	/****************** ft_strmapi ******************/
		/***************************************/

	/* FT_STRMAPI
		Applies the function ’f’ to each character of the string ’s’ to create a new 
		string (with malloc(3)) resulting from successive applications of ’f’.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;123m		~~ FT_STRMAPI TESTER ~~\033[0m\n\n");

	/* Test 1 */

	char	str9[] = "Primrose";
	char 	check14[] = "PRIMROSE";

	ptr = ft_strmapi(str9, f);

	if (strncmp(ptr, check14, sizeof(check14)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic test\n");
	free(ptr);

	/* Test 2 */

	char	str10[] = "";
	char 	check15[] = "";

	ptr = ft_strmapi(str10, f);

	if (strncmp(ptr, check15, sizeof(check15)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");
	free(ptr);

	/* Test 3 */

	char	*ptr2;

	ptr2 = NULL;

	ptr = ft_strmapi(ptr2, f);

	if (ptr == NULL)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("function protection\n");
	free(ptr);
	
			/***************************************/
	/****************** ft_putchar_fd ******************/
		/***************************************/

/* FT_PUTCHAR_FD
	Outputs the character ’c’ to the given file descriptor.
*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;117m		~~ FT_PUTCHAR_FD TESTER ~~\033[0m\n\n");  

	char	strpchar[10];
	char	*pchar;
	int		c;
	int		ofile;

	ofile = open("ft_libft_tester_putchar.txt", O_CREAT | O_RDWR, 0777);
	c = 'f';
	pchar = strpchar;

	ft_putchar_fd(c, ofile);
	lseek(ofile, 0, SEEK_SET);
	while (read(ofile, pchar, 1) == 1)
    {
		pchar++;
        *pchar = '\0';
	}
	close(ofile);
	
    if (!strcmp(strpchar, "f"))
		printf("\033[1;38;5;117mOK - \033[0m");
    else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("basic\n");

		/***************************************/
	/****************** ft_putstr_fd ******************/
		/***************************************/

/* FT_PUTSTR_FD
	Outputs the string ’s’ to the given file descriptor.
*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;153m		~~ FT_PUTSTR_FD TESTER ~~\033[0m\n\n");  

	char	buf[11];
	char	*resput;
	int		putsfd;
	char	check16[] = "This string";
	putsfd = open("ft_putstr_tester.txt", O_CREAT | O_RDWR, 0777);

	resput = buf;
	ft_putstr_fd(check16, putsfd);

	lseek(putsfd, 0, SEEK_SET);

	while(read(putsfd, resput, 1) == 1)
		resput++;
	*resput = '\0';
	close(putsfd);

	if (strncmp(buf, check16, sizeof(check16)) == 0)
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("basic\n");

		/***************************************/
	/****************** ft_putendl_fd ******************/
		/***************************************/

/* FT_PUTENDL_FD
	Outputs the string ’s’ to the given file descriptor, followed by a newline.
*/
		 
	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;39m		~~ FT_PUTENDL_FD TESTER ~~\033[0m\n\n");

	char	*putsend;
	char	bufend[12];
	int		endfd;

	endfd = open("ft_putendl_tester.txt", O_CREAT | O_RDWR, 0777);

	putsend = bufend;
	ft_putendl_fd(check16, endfd);

	lseek(endfd, 0, SEEK_SET);

	while(read(endfd, putsend, 1) == 1)
		putsend++;
	*putsend = '\0';
	close(endfd);

	if(strncmp(putsend, check16, sizeof(bufend)) == 0)
		printf("\033[1;38;5;39mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("basic\n");
	
		/***************************************/
	/****************** ft_putnbr_fd ******************/
		/***************************************/

/* FT_PUTNBR_FD
	Outputs the integer ’n’ to the given file descriptor.
*/
		 
	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;33m		~~ FT_PUTNBR_FD TESTER ~~\033[0m\n\n");

	char	nbrbuf[5];
	char	*nbrput;
	int		nbrfd;
	int		nbr;

	nbrfd = open("ft_putnbr_tester.txt", O_CREAT | O_RDWR, 0777);

	nbrput = nbrbuf;
	nbr = 5684;
	ft_putnbr_fd(nbr, nbrfd);

	lseek(nbrfd, 0, SEEK_SET);

	while(read(nbrfd, nbrput, 1) == 1)
		nbrput++;
	*nbrput = '\0';
	close(nbrfd);

	if(strncmp(nbrbuf, "5684", sizeof(nbrbuf)) == 0)
		printf("\033[1;38;5;33mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO - \033[0m");
	printf("basic\n");
	printf("\n-----------------------------------------------------\n");
 	printf("\n\n\033[1;38;5;213m		END OF PART 2 - WOOHOO!\033[0m\n\n\n");
}
