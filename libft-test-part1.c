#include  "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		main(void)
{
	printf("\n\n\033[1;38;5;213m	   LIBFT TESTER PART 1 - HERE WE GO! \n\n\033[0m");

		/***************************************/
	/****************** ft_memset ******************/
		/***************************************/

	/* FT_MEMSET
		The memset() function writes len bytes of value c 
		(converted to an unsigned char) to the string b.
	*/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;40m		~~ FT_MEMSET TESTER ~~\033[0m\n\n");

	/* Test 1 */

	char	str0[] = "Jerry Springer";
	char	str1[] = "Jerry Springer";

	char	str2[30];
	char	str3[30];

	memset(str0, '*', 5 * sizeof(char));
	ft_memset(str1, '*', 5 * sizeof(char));

	if (strncmp(str0, str1, sizeof(str0)) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("writes n bytes of value c to str b #1\n");

	/* Test 2 */

	memset(str2, '0', 20);
	memset(str3, '0', 20);

	memset(str2, '*', 10);
	ft_memset(str3, '*', 10);

	if (memcmp(str2, str3, 20) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("writes n bytes of value c to str b #2\n");

	/* Test 3 */

	memset(str2, '0', 20);
	memset(str3, '0', 20);

	memset(str2, '\200', 10);
	ft_memset(str3, '\200', 10);

	if (memcmp(str2, str3, 20) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("Unsigned char test\n");
	
	/* Test 4 */

	memset(str2, '0', 20);
	memset(str3, '0', 20);

	memset(str2, '*', (0));
	ft_memset(str3, '*', (0));

	if (memcmp(str2, str3, 20) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n is 0\n");
	
	/* Int array test 
		The memset function is generally not used with integers. Memset works character by character and an integer 
		contains more than one byte. However, if you change int c to zero, it sets the array values to zero.
	*/
	
	int	n = 10;
	int	arr0[10];
	int	arr1[10];

	memset(arr0, 0, n * sizeof(arr0[0]));
	ft_memset(arr1, 0, n * sizeof(arr1[0]));

	if (memcmp(arr0, arr1, n) == 0)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("set integer array to zero\n\n");

		/***************************************/
	/****************** ft_bzero ******************/
		/***************************************/

	/* FT_BZERO
		The bzero() function writes n zeroed bytes to the 
		string s. If n is zero, bzero() does nothing.
	*/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;41m		~~ FT_BZERO TESTER ~~\033[0m\n\n");

	/* Test 1 */

	char str4[] = "Dancing in the dark";
	char str5[] = "Dancing in the dark";

	bzero(str4 + 4, 4 * sizeof(char));
	ft_bzero(str5 + 4, 4 * sizeof(char));

	if (memcmp(str4, str5, sizeof(str4)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("write n zeroed bytes to str s #1\n");
	
	/* Test 2 */

	memset(str2, '*', sizeof(str2));
	memset(str3, '*', sizeof(str3));

	bzero(str2, sizeof(str2));
	ft_bzero(str3, sizeof(str3));

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("write n zeroed bytes to str s #2\n");

	/* Test 3 */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));
	
	bzero(str2, (0));
	ft_bzero(str3, (0));

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n is 0\n\n");


		/***************************************/
	/****************** ft_memcpy ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;42m		~~ FT_MEMCPY TESTER ~~\033[0m\n\n");

	/* FT_MEMCPY
		The memcpy() function copies n bytes from memory area src to memory area dst. If dst and
    	src overlap, behavior is undefined. Applications in which dst and src might overlap
    	should use memmove(3) instead.
	*/

	/* Test 1 */
	
	char	str7[] = "Curiosity killed the cat";
	char	str8[] = "Curiosity killed the cat";

	memcpy(str7, "Great dog slogan", 15);
	ft_memcpy(str8, "Great dog slogan", 15);

	if (memcmp(str7, str8, sizeof(str7)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("copy n bytes from src to dst #1\n");

	/* Test 2 */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));

	memcpy(str2, "Eye of the tiger", 5);
    ft_memcpy(str3, "Eye of the tiger", 5);

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("copy n bytes from src to dst #2\n");
	
	/* Test 3 */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));

	memcpy(str2, "Say\0wh\0at\0??\0", sizeof(str2));
    ft_memcpy(str3, "Say\0wh\0at\0??\0", sizeof(str2));

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("null character test\n");
	
	/* Zero test */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));
	
	memcpy(str2, "All Cats Are Beautiful", (0));
	ft_memcpy(str3, "All Cats Are Beautiful", (0));

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n is 0\n\n");


		/***************************************/
	/****************** ft_memccpy ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;43m		~~ FT_MEMCCPY TESTER ~~\033[0m\n\n");

	/* FT_MEMCCPY
		The memccpy() function copies bytes from string src to string dst. If
		the character c (as converted to an unsigned char) occurs in the string
		src, the copy stops and a pointer to the byte after the copy of c in the
		string dst is returned. Otherwise, n bytes are copied, and a NULL
		pointer is returned. The source and destination strings should not overlap, 
		as the behavior is undefined. The source and destination strings should not overlap, 
		as the behavior is undefined.
	*/

	/* Test 1 */

	memset(str2, '0', sizeof(str2));
	ft_memset(str3, '0', sizeof(str3));

	memccpy(str2, "Don't cut me off please", 't', sizeof(str2));
	ft_memccpy(str3, "Don't cut me off please", 't', sizeof(str3));
	
	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c occurs in src\n");

	/* Test 2 */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));

	memccpy(str2, "Atomic", 'x', sizeof(str2));
	ft_memccpy(str3, "Atomic", 'x', sizeof(str3));

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c doesn't occur in src\n");

	/* Test 3 */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));

	memccpy(str2, "The magic number", 'n', 5);
	ft_memccpy(str3, "The magic number", 'n', 5);

	if (memcmp(str2, str3, sizeof(str2)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c occurs in src but not within n bytes\n\n");

		/***************************************/
	/****************** ft_memmovve ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;44m		~~ FT_MEMMOVE TESTER ~~\033[0m\n\n");

	/* FT_MEMMOVE
 		The memmove() function copies len bytes from string src to string dst.
		The two strings may overlap; the copy is always done in a non-destructive manner.
	*/

	char	*sys;
	char	*ft;

	/* Test 1 */

	char	str9[] = "Rick Astley";
	char	str10[] = "Rick Astley";
	
	sys = memmove(str9, str9 + 2, 9 * sizeof(char));
	ft = ft_memmove(str10, str10 + 2, 9 * sizeof(char));

	if (memcmp(str9, str10, sizeof(str9)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("copy len bytes from src to dest\n");

	/* Test 2 */
	
	memcpy(str2, "Swaan Miller", 13);
	memcpy(str3, "Swaan Miller", 13);
	
	sys = memmove(str2 + 3, str2, 8 * sizeof(char));
	ft = ft_memmove(str3 + 3, str3, 8 * sizeof(char));

	if (memcmp(sys, ft, 8) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("overlap test #1\n");

	/* Test 3 */

	memset(str2, '0', sizeof(str2));
	memset(str3, '0', sizeof(str3));

	memcpy(str2, "Start Stop", 11);
	memcpy(str3, "Start Stop", 11);

	sys = memmove(str2 + 2, str2, 3 * sizeof(char));
	ft = ft_memmove(str3 + 2, str3, 3 * sizeof(char));

	if (memcmp(sys, ft, 10) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("overlap test #2\n\n");

		/***************************************/
	/****************** ft_memchr ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;123m		~~ FT_MEMCHR TESTER ~~\033[0m\n\n");


	/* FT_MEMCHR
		The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
	*/

	char	sysmemchr[17];
	char	ftmemchr[17];

	memcpy(sysmemchr, "NiloRulesBigTime", sizeof(sysmemchr));
	memcpy(ftmemchr, "NiloRulesBigTime", sizeof(ftmemchr));

	memchr(sysmemchr, 'R', sizeof(sysmemchr));
	ft_memchr(ftmemchr, 'R', sizeof(ftmemchr));
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	memcpy(sysmemchr, "NiloRulesBigTime", sizeof(sysmemchr));
	memcpy(ftmemchr, "NiloRulesBigTime", sizeof(ftmemchr));

	memchr(sysmemchr, 'x', sizeof(sysmemchr));
	ft_memchr(ftmemchr, 'x', sizeof(ftmemchr));
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c not in s\n");

	memcpy(sysmemchr, "Holyohell", sizeof(sysmemchr));
	memcpy(ftmemchr, "Holyohell", sizeof(ftmemchr));

	memchr(sysmemchr, 'o', sizeof(sysmemchr));
	ft_memchr(ftmemchr, 'o', sizeof(ftmemchr));
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("two c's\n");	

	memcpy(sysmemchr, "Holyohell", sizeof(sysmemchr));
	memcpy(ftmemchr, "Holyohell", sizeof(ftmemchr));

	memchr(sysmemchr, 'H', 4);
	ft_memchr(ftmemchr, 'H', 4);
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c is first letter\n");

	memcpy(sysmemchr, "olyohellH", sizeof(sysmemchr));
	memcpy(ftmemchr, "olyohellH", sizeof(ftmemchr));

	memchr(sysmemchr, 'H', 4);
	ft_memchr(ftmemchr, 'H', 4);
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c is last letter\n");

	memcpy(sysmemchr, "olyohellH", sizeof(sysmemchr));
	memcpy(ftmemchr, "olyohellH", sizeof(ftmemchr));

	memchr(sysmemchr, 'y', 2);
	ft_memchr(ftmemchr, 'y', 2);
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n can't find c\n");

	memcpy(sysmemchr, "olyohellH", sizeof(sysmemchr));
	memcpy(ftmemchr, "olyohellH", sizeof(ftmemchr));

	sysmemchr[0] = '\0';
	sysmemchr[2] = 'a';
	ftmemchr[0] = '\0';
	ftmemchr[2] = 'a';
	memchr(sysmemchr, 'a', 5);
	ft_memchr(ftmemchr, 'a', 5);
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("null terminator\n");

	int mem[7] = {-49, 49, 1, -1, 0, -2, 2};

	memchr(mem, -1, 7);
	ft_memchr(mem, -1, 7);
	if (strncmp(sysmemchr, ftmemchr, sizeof(sysmemchr)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("int array\n");

	/* Test 1 */
	
	sys = memchr("Runyon Canyon", 'C', 14 * sizeof(char));
	ft = ft_memchr("Runyon Canyon", 'C', 14 * sizeof(char));

	if (memcmp(sys, ft, 7 * sizeof(char)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c occurs in str\n");

	/* Test 2 */
	
	sys = memchr("Hollywood Bowl", 'x', 15 * sizeof(char));
	ft = ft_memchr("Hollywood Bowl", 'x', 15 * sizeof(char));

	if (sys == NULL && ft == NULL)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c doesn't occur in str\n\n");

		/***************************************/
	/****************** ft_memcmp ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;117m		~~ FT_MEMCMP TESTER ~~\033[0m\n\n");
	
	size_t	sysmemcmp;
	size_t  ftmemcmp;

	sysmemcmp = memcmp("hello", "hello", 6);
	ftmemcmp = ft_memcmp("hello", "hello", 6);

	if (sysmemcmp == ftmemcmp)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	sysmemcmp = memcmp("hexlo", "hello", 5);
	ftmemcmp = ft_memcmp("hexlo", "hello", 5);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	sysmemcmp = memcmp("hello", "hella", 4);
	ftmemcmp = ft_memcmp("hello", "hella", 4);

	if (sysmemcmp == ftmemcmp)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("match through n\n");

	sysmemcmp = memcmp("hello", "hella", 5);
	ftmemcmp = ft_memcmp("hello", "hella", 5);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("last letter is different\n");

	sysmemcmp = memcmp("iello", "hello", 5);
	ftmemcmp = ft_memcmp("zello", "hello", 5);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("first letter is different\n");

	sysmemcmp = memcmp("Yooyo", "YooYo", 5);
	ftmemcmp = ft_memcmp("Yooyo", "YooYo", 5);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("different cases\n");

	sysmemcmp = memcmp("hello", "hella", 0);
	ftmemcmp = ft_memcmp("hello", "hella", 0);

	if (sysmemcmp == ftmemcmp)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n is zero\n");

	sysmemcmp = memcmp("hello", "", 5);
	ftmemcmp = ft_memcmp("hello", "", 5);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");

	sysmemcmp = memcmp("", "hellp", 5);
	ftmemcmp = ft_memcmp("", "hellp", 5);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");

	sysmemcmp = memcmp("t\200", "t\0", 2);
	ftmemcmp = ft_memcmp("t\200", "t\0", 2);

	if (sysmemcmp > 0 && ftmemcmp > 0)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("unsigned char\n");


		/***************************************/
	/****************** ft_strlen ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;153m		~~ FT_STRLEN TESTER ~~\033[0m\n\n"); 

	size_t	sysstrlen;
	size_t	ftstrlen;

	sysstrlen = strlen("what in the world is this");
	ftstrlen = ft_strlen("what in the world is this");
	if (sysstrlen == ftstrlen)
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	sysstrlen = strlen("");
	ftstrlen = ft_strlen("");
	if (sysstrlen == ftstrlen)
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");

	sysstrlen = strlen("	    ");
	ftstrlen = ft_strlen("	    ");
	if (sysstrlen == ftstrlen)
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("spaces and tabs\n");

	sysstrlen = strlen("\n\n\f\r\t");
	ftstrlen = ft_strlen("\n\n\f\r\t");
	if (sysstrlen == ftstrlen)
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("various whitespaces\n");

		/***************************************/
	/****************** ft_strlcpy ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;39m		~~ FT_STRLCPY TESTER ~~\033[0m\n\n"); 


    char    dsysstrlcpy[40];
    char    dftstrlcpy[40];
    size_t  sysstrlcpy;
    size_t  ftstrlcpy;

    memset(dsysstrlcpy, 0, 38);
    sysstrlcpy = strlcpy(dsysstrlcpy, "Hey hey whats that sound", 25);
    memset(dftstrlcpy, 0, 38);
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "Hey hey whats that sound", 25);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("basic\n");

    memset(dsysstrlcpy, 0, 38);
    sysstrlcpy = strlcpy(dsysstrlcpy, "Hey hey whats that sound\0           ", 25);
    memset(dftstrlcpy, 0, 38);
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "Hey hey whats that sound\0           ", 25);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("copies entire src\n");

    memset(dsysstrlcpy, 0, 38);
    sysstrlcpy = strlcpy(dsysstrlcpy, "Heyyoo what", 0);
    memset(dftstrlcpy, 0, 38);
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "Heyyoo what", 0);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("dstsize is zero\n");

    memset(dsysstrlcpy, 0, 38);
    sysstrlcpy = strlcpy(dsysstrlcpy, "", 6);
    memset(dftstrlcpy, 0, 38);
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "", 6);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("src is empty string\n");

    memset(dsysstrlcpy, 0, 38);
    sysstrlcpy = strlcpy(dsysstrlcpy, "Heyyoo what", 3);
    memset(dftstrlcpy, 0, 38);
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "Heyyoo what", 3);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("dstsize smaller than dst\n");

    memset(dsysstrlcpy, 0, 38);
	dsysstrlcpy[0] = '\0';
    sysstrlcpy = strlcpy(dsysstrlcpy, "Heyyoo what", 3);
    memset(dftstrlcpy, 0, 38);
	dftstrlcpy[0] = '\0';
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "Heyyoo what", 3);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("null terminator\n");

    memset(dsysstrlcpy, 0, 38);
    sysstrlcpy = strlcpy(dsysstrlcpy, "Heyyoo what in  the world how do I dooo odood", 38);
    memset(dftstrlcpy, 0, 38);
    ftstrlcpy = ft_strlcpy(dftstrlcpy, "Heyyoo what in  the world how do I dooo odood", 38);
    if ((strncmp(dsysstrlcpy, dftstrlcpy, sizeof(dsysstrlcpy)) == 0) && sysstrlcpy == ftstrlcpy)
        printf("\033[1;38;5;39mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("src is larger than dst\n");


		/***************************************/
	/****************** ft_strlcat ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;40m		~~ FT_STRLCAT TESTER ~~\033[0m\n\n"); 

    char    dsysstrlcat[15];
    char    dftstrlcat[15];
    size_t  sysstrlcat;
    size_t  ftstrlcat;

    memset(dsysstrlcat, 0, 15);
    sysstrlcat = strlcat(dsysstrlcat, "nope", 15);
    memset(dftstrlcat, 0, 15);
    ftstrlcat = ft_strlcat(dftstrlcat, "nope", 15);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("basic\n");

    memset(dsysstrlcat, 0, 15);
    sysstrlcat = strlcat(dsysstrlcat, "", 15);
    memset(dftstrlcat, 0, 15);
    ftstrlcat = ft_strlcat(dftstrlcat, "", 15);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("src is empty string\n");

	memset(dsysstrlcat, 0, 15);
	dsysstrlcat[0] = '\0';
	dsysstrlcat[11] = 'a';
    sysstrlcat = strlcat(dsysstrlcat, "nilo bilo", 15);
    memset(dftstrlcat, 0, 15);
	dftstrlcat[0] = '\0';
	dftstrlcat[11] = 'a';
    ftstrlcat = ft_strlcat(dftstrlcat, "nilo bilo", 15);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("null terminator\n");

    memset(dsysstrlcat, 0, 15);
    sysstrlcat = strlcat(dsysstrlcat, "hello how are you can't wait to chat", 15);
    memset(dftstrlcat, 0, 15);
    ftstrlcat = ft_strlcat(dftstrlcat, "hello how are you can't wait to chat", 15);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("src larger than dst\n");

    memset(dsysstrlcat, 'b', 15);
    sysstrlcat = strlcat(dsysstrlcat, "hello how are you can't wait to chat", 6);
    memset(dftstrlcat, 'b', 15);
    ftstrlcat = ft_strlcat(dftstrlcat, "hello how are you can't wait to chat", 6);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("dstsize smaller than dst\n");

    memset(dsysstrlcat, 'b', 15);
    sysstrlcat = strlcat(dsysstrlcat, "hello how are you can't wait to chat", 0);
    memset(dftstrlcat, 'b', 15);
    ftstrlcat = ft_strlcat(dftstrlcat, "hello how are you can't wait to chat", 0);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("dstsize is zero\n");

    char    *nulldsysstrlcat = NULL;
    char    *nulldftstrlcat = NULL;
    sysstrlcat = strlcat(nulldsysstrlcat, strdup("a"), 0);
    ftstrlcat = ft_strlcat(nulldftstrlcat, strdup("a"), 0);
    if ((strncmp(dsysstrlcat, dftstrlcat, sizeof(dsysstrlcat)) == 0) && sysstrlcat == ftstrlcat)
        printf("\033[1;38;5;40mOK - \033[0m");
    else
        printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
    printf("dst is null, dstsize is 0\n");

		/***************************************/
	/****************** ft_strchr ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;41m		~~ FT_STRCHR TESTER ~~\033[0m\n\n"); 
	

	char    sysstrchr[] = "goobledygoo";
    char    ftstrchr[] = "goobledygoo";

	strchr(sysstrchr, 'o');
	ft_strchr(ftstrchr, 'o');

	if (strncmp(sysstrchr, ftstrchr, sizeof(sysstrchr)) ==  0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	strchr(sysstrchr, 'g');
	ft_strchr(ftstrchr, 'g');

	if (strncmp(sysstrchr, ftstrchr, sizeof(sysstrchr)) ==  0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c at beginning\n");

	memcpy(sysstrchr, "goobledygos", sizeof(sysstrchr));
	memcpy(ftstrchr, "goobledygos", sizeof(ftstrchr));
	strchr(sysstrchr, 'g');
	ft_strchr(ftstrchr, 'g');

	if (strncmp(sysstrchr, ftstrchr, sizeof(sysstrchr)) ==  0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c at end\n");

	memcpy(sysstrchr, "goobledygoo", sizeof(sysstrchr));
	memcpy(ftstrchr, "goobledygoo", sizeof(ftstrchr));
	strchr(sysstrchr, 'x');
	ft_strchr(ftstrchr, 'x');

	if (strncmp(sysstrchr, ftstrchr, sizeof(sysstrchr)) ==  0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("no c\n");

	strchr(sysstrchr, '\0');
	ft_strchr(ftstrchr, '\0');

	if (strncmp(sysstrchr, ftstrchr, sizeof(sysstrchr)) ==  0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("null terminator\n");

	memcpy(sysstrchr, "", sizeof(sysstrchr));
	memcpy(ftstrchr, "", sizeof(ftstrchr));
	strchr(sysstrchr, 'a');
	ft_strchr(ftstrchr, 'a');

	if (strncmp(sysstrchr, ftstrchr, sizeof(sysstrchr)) ==  0)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");


		/***************************************/
	/****************** ft_strrchr ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;42m		~~ FT_STRRCHR TESTER ~~\033[0m\n\n"); 

	char    sysstrrchr[] = "goobledygoo";
    char    ftstrrchr[] = "goobledygoo";

	strrchr(sysstrchr, 'b');
	ft_strrchr(ftstrchr, 'b');

	if (strncmp(sysstrrchr, ftstrrchr, sizeof(sysstrrchr)) ==  0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	strrchr(sysstrchr, 'g');
	ft_strrchr(ftstrchr, 'g');

	if (strncmp(sysstrrchr, ftstrrchr, sizeof(sysstrrchr)) ==  0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c at beginning\n");

	strrchr(sysstrchr, 'o');
	ft_strrchr(ftstrchr, 'o');

	if (strncmp(sysstrrchr, ftstrrchr, sizeof(sysstrrchr)) ==  0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("c at end\n");

	strrchr(sysstrchr, 'x');
	ft_strrchr(ftstrchr, 'x');

	if (strncmp(sysstrrchr, ftstrrchr, sizeof(sysstrrchr)) ==  0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("no c\n");

	strrchr(sysstrchr, '\0');
	ft_strrchr(ftstrchr, '\0');

	if (strncmp(sysstrrchr, ftstrrchr, sizeof(sysstrrchr)) ==  0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("null terminator\n");

	memcpy(sysstrrchr, "", sizeof(sysstrrchr));
	memcpy(ftstrrchr, "", sizeof(ftstrrchr));
	strrchr(sysstrchr, '\0');
	ft_strrchr(ftstrchr, '\0');

	if (strncmp(sysstrrchr, ftstrrchr, sizeof(sysstrrchr)) ==  0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");


		/***************************************/
	/****************** ft_strnstr ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;43m		~~ FT_STRNSTR TESTER ~~\033[0m\n\n"); 

    char    sysstrnstr[30] = "what in the world";
    char    ftstrnstr[30] = "what in the world";

	strnstr(sysstrnstr, "the", sizeof(sysstrnstr));
	ft_strnstr(ftstrnstr, "the", sizeof(ftstrnstr));

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("needle front\n");
   
   	memcpy(sysstrnstr, "in the world what", 30);
   	memcpy(ftstrnstr, "in the world what", 30);

	strnstr(sysstrnstr, "what", sizeof(sysstrnstr));
	ft_strnstr(ftstrnstr, "what", sizeof(ftstrnstr));

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("needle back\n");

   	memcpy(sysstrnstr, "in the world what", 30);
   	memcpy(ftstrnstr, "in the world what", 30);

	strnstr(sysstrnstr, "the", sizeof(sysstrnstr));
	ft_strnstr(ftstrnstr, "the", sizeof(ftstrnstr));

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("needle middle\n");

   	memcpy(sysstrnstr, "what in the world", 30);
   	memcpy(ftstrnstr, "what in the world", 30);

	strnstr(sysstrnstr, "what", 3);
	ft_strnstr(ftstrnstr, "what", 3);

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("len too short to find needle\n");

   	memcpy(sysstrnstr, "what in the world", 30);
   	memcpy(ftstrnstr, "what in the world", 30);

	strnstr(sysstrnstr, "what", 20);
	ft_strnstr(ftstrnstr, "what", 20);

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("len longer than hay\n");

	memcpy(sysstrnstr, "what in the world", 30);
   	memcpy(ftstrnstr, "what in the world", 30);

	strnstr(sysstrnstr, "in", 0);
	ft_strnstr(ftstrnstr, "in", 0);

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("len is zero, needle exists\n");

	memcpy(sysstrnstr, "what in the world", 30);
   	memcpy(ftstrnstr, "what in the world", 30);

	strnstr(sysstrnstr, "gosh", 0);
	ft_strnstr(ftstrnstr, "gosh", 0);

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("len is zero, no needle exists\n");

	memcpy(sysstrnstr, "what in the world", 30);
   	memcpy(ftstrnstr, "what in the world", 30);

	strnstr(sysstrnstr, "", sizeof(sysstrnstr));
	ft_strnstr(ftstrnstr, "", sizeof(sysstrnstr));

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("needle is empty string\n");
	
	memcpy(sysstrnstr, "what in the world", 30);
   	memcpy(ftstrnstr, "what in the world", 30);

	strnstr(sysstrnstr, "happy", sizeof(sysstrnstr));
	ft_strnstr(ftstrnstr, "happy", sizeof(sysstrnstr));

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("needle not in hay\n");
	
	memcpy(sysstrnstr, "", 30);
   	memcpy(ftstrnstr, "", 30);

	strnstr(sysstrnstr, "happy", 5);
	ft_strnstr(ftstrnstr, "happy", 5);

	if (strncmp(sysstrnstr, ftstrnstr, sizeof(sysstrnstr)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("hay empty string\n");	


		/***************************************/
	/****************** ft_strncmp ******************/
		/***************************************/
	
	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;44m		~~ FT_STRNCMP TESTER ~~\033[0m\n\n"); 
	

	int     sysstrncmp;
	int     ftstrncmp;

	sysstrncmp = strncmp("testss", "test", 7);
	ftstrncmp = ft_strncmp("testss", "test", 7);

	if (sysstrncmp > 0 && ftstrncmp > 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	sysstrncmp = strncmp("test", "testss", 7);
	ftstrncmp = ft_strncmp("test", "testss", 7);

	if (sysstrncmp < 0 && ftstrncmp < 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic\n");

	sysstrncmp = strncmp("hello", "hellq", 5);
	ftstrncmp = ft_strncmp("hello", "hellq", 5);

	if (sysstrncmp < 0 && ftstrncmp < 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic negative\n");

	sysstrncmp = strncmp("abcdefgh", "abcdwxyz", 4);
	ftstrncmp = ft_strncmp("abcdefgh", "abcdwxyz", 4);

	if (sysstrncmp == 0 && ftstrncmp == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic equal\n");

	sysstrncmp = strncmp("hellq", "hello", 5);
	ftstrncmp = ft_strncmp("hellq", "hello", 5);

	if (sysstrncmp > 0 && ftstrncmp > 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic positive\n");

	sysstrncmp = strncmp("\200", "\0", 1);
	ftstrncmp = ft_strncmp("\200", "\0", 1);

	if (sysstrncmp > 0 && ftstrncmp > 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("unsigned char\n");

	sysstrncmp = strncmp("test", "", 4);
	ftstrncmp = ft_strncmp("test", "", 4);

	if (sysstrncmp > 0 && ftstrncmp > 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");

	sysstrncmp = strncmp("", "test", 4);
	ftstrncmp = ft_strncmp("", "test", 4);

	if (sysstrncmp < 0 && ftstrncmp < 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");
 
	sysstrncmp = strncmp("test", "tEst", 4);
	ftstrncmp = ft_strncmp("test", "tEst", 4);

	if (sysstrncmp > 0 && ftstrncmp > 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("differing cases\n");

	sysstrncmp = strncmp("nilo", "nilo", 0);
	ftstrncmp = ft_strncmp("nilo", "nilo", 0);

	if (sysstrncmp == 0 && ftstrncmp == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n is zero\n");

	sysstrncmp = strncmp("\0", "\0", 1);
	ftstrncmp = ft_strncmp("\0", "\0", 1);

	if (sysstrncmp == 0 && ftstrncmp == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("null terminator\n");

	sysstrncmp = strncmp("nilo", "nilo", -2);
	ftstrncmp = ft_strncmp("nilo", "nilo", -2);

	if (sysstrncmp == 0 && ftstrncmp == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("n is negative\n");


		/***************************************/
	/****************** ft_atoi ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;123m		~~ FT_ATOI TESTER ~~\033[0m\n\n"); 


	int	sysatoi;
	int	ftatoi;

	sysatoi = atoi("847562");
	ftatoi = ft_atoi("847562");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic positive\n");

	sysatoi = atoi("-873");
	ftatoi = ft_atoi("-873");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("minus sign\n");

	sysatoi = atoi("+873");
	ftatoi = ft_atoi("+873");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("plus sign\n");

	sysatoi = atoi("\t\n\r\v\f  469 \n");
	ftatoi = ft_atoi("\t\n\r\v\f  469 \n");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("multiple mathematical symbols at front of string\n");

	sysatoi = atoi("\t\n\r\v\f  469 \n");
	ftatoi = ft_atoi("\t\n\r\v\f  469 \n");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("whitespace at beginning and end of string\n");

	sysatoi = atoi("");
	ftatoi = ft_atoi("");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("empty string\n");

	sysatoi = atoi("00957");
	ftatoi = ft_atoi("00957");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("multiple zeros\n");

	sysatoi = atoi("214748363649");
	ftatoi = ft_atoi("214748363649");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("max int\n");

	sysatoi = atoi("-214748363649");
	ftatoi = ft_atoi("-214748363649");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("min int\n");

/*
	CAN ADD THE CHECK FOR MAX LONG AND MIN LONG ONCE
	WE WRITE AN ATOI_L FUNCTION AND ADD IT TO ATOI

	sysatoi = atoi("9223372036854775809");
	ftatoi = ft_atoi("9223372036854775809");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO - \033[0m");
	printf("long max\n");
	
	sysatoi = atoi("-9223372036854775809");
	ftatoi = ft_atoi("-9223372036854775809");

	if (sysatoi == ftatoi)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;197mKO - \033[0m");
	printf("long min\n");
*/	

		/***************************************/
	/****************** ft_isalpha ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;117m		~~ FT_ISALPHA TESTER ~~\033[0m\n\n"); 

	/* FT_ISALPHA
 		The isalpha() function tests for any character for which isupper(3) or islower(3) is true.
	*/

	/* Test 1 */

	if (isalpha('a') == ft_isalpha('a'))
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("lower case\n");

	/* Test 2 */

	if (isalpha('Z') == ft_isalpha('Z'))
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;196m[KO] ¯\\_(ツ)_/¯ - \033[0m");
	printf("upper case\n");

	/* Test 3 */

	if (isalpha('4') == ft_isalpha('4'))
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic false\n\n");


		/***************************************/
	/****************** ft_isdigit ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;153m		~~ FT_ISDIGIT TESTER ~~\033[0m\n\n"); 

	/* FT_ISDIGIT
 		The isdigit() function tests for a decimal digit character.
	*/

	/* Test 1 */

	if (isdigit('1') == ft_isdigit('1'))
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic true\n");

	/* Test 2 */

	if (isdigit('a') == ft_isdigit('a'))
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic false\n\n");


		/***************************************/
	/****************** ft_isalnum ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;39m		~~ FT_ISALNUM TESTER ~~\033[0m\n\n"); 

	/* FT_ISALNUM
		The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.
	*/

	/* Test 1 */

	if (isalnum('a') == ft_isalnum('a'))
		printf("\033[1;38;5;39mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("isalpha\n");

	/* Test 2 */

	if (isalnum('1') == ft_isalnum('9'))
		printf("\033[1;38;5;39mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("isdigit\n");

	/* Test 3 */

	if (isalnum('\0') == ft_isalnum('\0'))
		printf("\033[1;38;5;39mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("basic false\n\n");



		/***************************************/
	/****************** ft_isascii ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;40m		~~ FT_ISASCII TESTER ~~\033[0m\n\n"); 

	/* FT_ISASCII
		The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
	*/

	/* Test 1 */

	if (isascii(0) == ft_isascii(0))
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("is ascii \n");

	/* Test 2 */

	if (isascii(178) == ft_isascii(178))
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("is not ascii \n\n");


		/***************************************/
	/****************** ft_isprint ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;41m		~~ FT_ISPRINT TESTER ~~\033[0m\n\n"); 

	/* FT_ISPRINT
		    The isprint() function tests for any printing character, including space (' ')
	*/

	/* Test 1 */

	if (isprint(' ') == ft_isprint(' '))
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("is print \n");

	/* Test 2 */
	
	if (isprint(176) == ft_isprint(177))
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("is not print \n\n");


		/***************************************/
	/****************** ft_toupper ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;42m		~~ FT_TOUPPER TESTER ~~\033[0m\n\n");

	/* FT_TOUPPER
		The toupper() function converts a lower-case letter to the corresponding upper-case letter.
	*/

	/* Test 1 */

	if (toupper('a') == ft_toupper('a'))
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("lower case \n");

	/* Test 2 */
	
	if (toupper('Z') == ft_toupper('Z'))
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("upper case \n\n");


		/***************************************/
	/****************** ft_tolower ******************/
		/***************************************/

	printf("\n----------------------------------------------------------\n");
	printf("\n\033[1;38;5;43m		~~ FT_TOLOWER TESTER ~~\033[0m\n\n");

	/* FT_TOLOWER
		The tolower() function converts an upper-case letter to the corresponding lower-case letter.
	*/

	/* Test 1 */

	if (tolower('a') == ft_tolower('a'))
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("lower case \n");

	/* Test 2 */
	
	if (tolower('Z') == ft_tolower('Z'))
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("upper case \n\n");

	printf("\n----------------------------------------------------------\n");
 	printf("\n\n\033[1;38;5;213m		END OF PART 1 - WOOHOO!\033[0m\n\n\n");
}