/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft-test-bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-win <nvan-win@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/17 11:51:23 by nvan-win      #+#    #+#                 */
/*   Updated: 2020/05/21 10:41:15 by nvan-win      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void    upper(void *str)
{   
    char *s;
    int i;

    s = (char*)str;
    i = 0; 
    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        i++;
    }
}

void    *lower(void *str)
{   
    char *s;
    int i;

    s = (char*)str;
    i = 0; 
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
	return (s);
}

int main()
{
	printf("\n\n\033[1;38;5;213m	   LIBFT BONUS TESTER - HERE WE GO! \n\n\033[0m");

		/***************************************/
	/****************** ft_lstnew ******************/
		/***************************************/

	/* FT_LSTNEW
		Allocates (with malloc(3)) and returns a new element. The variable ’content’ 
		is initialized with the value of the parameter ’content’. The variable ’next’ 
		is initialized to NULL.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;40m		~ FT_LSTNEW TESTER ~\033[0m\n\n");

	/* Test 1 */

	char    str[] = "Cahuenga";
	t_list	*ptr;
	
	ptr = ft_lstnew(str);

	if (strncmp(ptr->content, str, sizeof(str)) == 0 &&
		ptr->next == NULL)
		printf("\033[1;38;5;40mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("create new element\n");
	free(ptr);

		/***************************************/
	/****************** ft_lstadd_front ******************/
		/***************************************/

	/* FT_LSTADD_FRONT
		Adds the element ’new’ at the beginning of the list.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;41m		~ FT_LSTADD_FRONT TESTER ~\033[0m\n\n");

	/* Test 1 */

	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*new;

	char	str1[] = "Lion";
	char	str2[] = "Tiger";
	char	str3[] = "Panther";

	char	check1[] = "Panther";
	char	check2[] = "Lion";
	char	check3[] = "Tiger";

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	new = ft_lstnew(str3);

	head = node1;
	node1->next = node2;
	node2->next = NULL;

	ft_lstadd_front(&head, new);
	
	if (strncmp(check1, head->content, sizeof(check1)) == 0 &&
		strncmp(check2, node1->content, sizeof(check2)) == 0 &&
		strncmp(check3, node2->content, sizeof(check3)) == 0 &&
		ft_lstsize(head) == 3)
		printf("\033[1;38;5;41mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("add new element to beginning list\n");
	free(node1);
	free(node2);
	free(new);

		/***************************************/
	/****************** ft_lstsize ******************/
		/***************************************/

	/* FT_LSTSIZE
		Counts the number of elements in a list.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;42m		~ FT_LSTSIZE TESTER ~\033[0m\n\n");

	/* Test 1 */

	t_list	*node3;

	node1 = ft_lstnew("Pineapple");
	node2 = ft_lstnew("Banana");
	node3 = ft_lstnew("Blueberry");

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	if (ft_lstsize(head) == 3)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("count number of elements in list\n");
	free(node1);
	free(node2);
	free(node3);

	/* Test 2 */

	head = NULL;
	
	if (ft_lstsize(head) == 0)
		printf("\033[1;38;5;42mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("function protection\n");

		/***************************************/
	/****************** ft_lstlast ******************/
		/***************************************/

	/* FT_LSTLAST
		Returns the last element of the list.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;43m		~ FT_LSTLAST TESTER ~\033[0m\n\n");

	/* Test 1 */

	node1 = ft_lstnew("Yosemite");
	node2 = ft_lstnew("Grand Canyon");
	node3 = ft_lstnew("Sequoia");

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ptr = ft_lstlast(head);
	
	if (strncmp(ptr->content, node3->content, sizeof(node3->content)) == 0)
		printf("\033[1;38;5;43mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("return last element of list\n");
	free(node1);
	free(node2);
	free(node3);

		/***************************************/
	/****************** ft_lstadd_back ******************/
		/***************************************/

	/* FT_LSTADD_BACK
		Adds the element ’new’ at the end of the list.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;44m		~ FT_LSTADD_BACK TESTER ~\033[0m\n\n");

	/* Test 1 */

	node1 = ft_lstnew("Amsterdam");
	node2 = ft_lstnew("Berlin");
	node3 = ft_lstnew("Los Angeles");
	new = ft_lstnew("London");

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstadd_back(&head, new);

	ptr = ft_lstlast(head);

	if (strncmp(ptr->content, new->content, sizeof(new->content)) == 0)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("return last element of list\n");
	free(node1);
	free(node2);
	free(node3);
	free(new);

	/* Test 2 */

	head = NULL;

	new = ft_lstnew("Hollywood Dell");

	ft_lstadd_back(&head, new);
	ptr = ft_lstlast(head);

	if (strncmp(ptr->content, new->content, sizeof(new->content)) == 0 &&
	ft_lstsize(head) == 1)
		printf("\033[1;38;5;44mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("head is null\n");
	free(new);

		/***************************************/
	/****************** ft_lstdelone ******************/
		/***************************************/

	/* FT_LSTDELONE
		Takes as a parameter an element and frees the memory of the element’s content using the 
		function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;123m		~ FT_LSTDELONE TESTER ~\033[0m\n\n");

	/* Test 1 */
	
	char	str4[] = "Tequila";
	char	check4[] = "";

	node1 = ft_lstnew("Mezcal");
	node2 = ft_lstnew(str4);
	node3 = ft_lstnew("Gin");

	head = node1;
	node1->next = node2;
	node2->content = strdup(str4);
	node2->next = node3;
	node3->next = NULL;

	ft_lstdelone(node2, &free);
	
	/*
	while (head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	*/
	
	if (strncmp(node2->content, check4, sizeof(check4)) == 0)
		printf("\033[1;38;5;123mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("free element's content\n");
	free(node1);
	free(node3);

		/***************************************/
	/****************** ft_lstclear ******************/
		/***************************************/

	/* FT_LSTCLEAR
		Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3).
		Finally, the pointer to the list must be set to NULL.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;117m		~ FT_LSTCLEAR TESTER ~\033[0m\n\n");

	/* Test 1 */

	char	str5[] = "Delete";
	char	str6[] = "This";
	char	str7[] = "List";

	node1 = ft_lstnew(str5);
	node2 = ft_lstnew(str6);
	node3 = ft_lstnew(str7);

	head = node1;
	node1->content = strdup(str5);
	node1->next = node2;
	node2->content = strdup(str6);
	node2->next = node3;
	node3->content = strdup(str7);
	node3->next = NULL;

	ft_lstclear(&head, &free);

	if (ft_lstsize(head) == 0 && head == NULL)
		printf("\033[1;38;5;117mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("delete list\n");

		/***************************************/
	/****************** ft_lstiter ******************/
		/***************************************/

	/* FT_LSTITER
		Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;153m		~ FT_LSTITER TESTER ~\033[0m\n\n");

	/* Test 1 */

	char str8[] = "Make";
	char str9[] = "Me";
	char str10[] = "Uppercase";

	char check5[] = "MAKE";
	char check6[] = "ME";
	char check7[] = "UPPERCASE";

	node1 = ft_lstnew(str8);
	node2 = ft_lstnew(str9);
	node3 = ft_lstnew(str10);

	head = node1;
	node1->content = strdup(str8);
	node1->next = node2;
	node2->content = strdup(str9);
	node2->next = node3;
	node3->content = strdup(str10);
	node3->next = NULL;

	ft_lstiter(head, *upper);

	if (strncmp(check5, node1->content, sizeof(check5)) == 0 &&
		strncmp(check6, node2->content, sizeof(check6)) == 0 &&
		strncmp(check7, node3->content, sizeof(check7)) == 0 &&
		ft_lstsize(head) == 3)
		printf("\033[1;38;5;153mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("apply function to content each element\n");
	ft_lstclear(&head, &free);

		/***************************************/
	/****************** ft_lstmap ******************/
		/***************************************/

	/* FT_LSTMAP
		Iterates the list ’lst’ and applies the function ’f’ to the content of each element. 
		Creates a new list resulting of the successive applications of the function ’f’. 
		The ’del’ function is used to delete the content of an element if needed.
	*/

	printf("\n-----------------------------------------------------\n");
	printf("\n\033[1;38;5;39m		~ FT_LSTMAP TESTER ~\033[0m\n\n");

	/* Test 1 */

	char str11[] = "Make";
	char str12[] = "Me";
	char str13[] = "Lowercase";
	
	char check8[] = "make";
	char check9[] = "me";
	char check10[] = "lowercase";

	node1 = ft_lstnew(str11);
	node2 = ft_lstnew(str12);
	node3 = ft_lstnew(str13);

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	new = ft_lstmap(head, &lower, &free);

	if (strncmp(check8, node1->content, sizeof(check8)) == 0 &&
		strncmp(check9, node2->content, sizeof(check9)) == 0 &&
		strncmp(check10, node3->content, sizeof(check10)) == 0 &&
		ft_lstsize(head) == 3)
		printf("\033[1;38;5;39mOK - \033[0m");
	else
		printf("\033[1;38;5;196mKO ¯\\_(ツ)_/¯ - \033[0m");
	printf("apply function to content each element\n\n");
	printf("\n-----------------------------------------------------\n");
 	printf("\n\n\033[1;38;5;213m		END OF BONUS - WOOHOO!\033[0m\n\n\n");
}