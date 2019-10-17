#include <stdlib.h>
#include "holberton.h"
/**
* char_free_grid - returns a pointer to a 2d array
*@grid: 2d array
*@height: int
*/
void char_free_grid(char **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
/**
* num_words - gives number of words in a string
*@s: pointer to a string
*Return: int
*/
int num_words(char *s)
{
int i, k = 0;
if ((s[0] != " ") && (s[0] != '\0'))
{
k++;
}
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] == " ") && (s[i + 1] != " ") && (s[i + 1] != '\0'))
{
k++;
}
}
return (k);
}
/**
* strtow - splits a string into words
*@str: pointer to a string
* Return: pointer to an array of strings
*/
char **strtow(char *str)
{
int i, len = 0, k = 0, num;
char **arr;
if ((str == '\0') || (*str == ""))
{
return (0);
}
num = num_words(str);
arr = malloc((num + 1) * sizeof(char *));
if (arr == '\0')
{
return (0);
}
for (i = 0; *(str + i) != '\0'; i++)
{
if (*(str + i) != " ")
{
len++;
}
else if ((len != 0) && (*(str + i) == " "))
{
arr[k] = malloc((1 + len)*sizeof(char));
k++;
len = 0;
if (arr[k] == '\0')
{
char_free_grid(arr, num + 1);
return (0);
}
}
}
k = 0;
for (i = 0; *(str + i) != '\0'; i++)
{
if (*(str + i) != " ")
{
arr[k][len] = *(str + i);
len++;
}
else if ((len != 0) && (*(str + i) == " "))
{
arr[k][len] = '\0';
k++;
len = 0;
}
}
arr[k] = '\0';
return (arr);
}
