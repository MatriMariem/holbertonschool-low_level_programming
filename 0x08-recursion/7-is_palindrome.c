#include "holberton.h"
/**
* is_palindrome - checks if a string is a palindrome
*@s: pointer to a string
*Return: 1 if palindrome and 0 if not
*/
int is_palindrome(char *s)
{
int l;
l = _strlen_recursion(s);
return (palin(0, s, l));
}

/**
*palin - checks if a string is palindrome or not
*@i: int
*@s: pointer to a string
*@l: length of the string
*Return: 1 if palindrome and 0 if not
*/
int palin(int i, char *s, int l)
{
if (*s == '\0')
{
return (1);
}
if (i == (l / 2))
{
return (1);
}
if (s[i] != s[(l - 1) - i])
{
return (0);
}
else
{
return (palin(i + 1, s, l));
}
}

/**
*_strlen_recursion - gives the length of a string
*@s: pointer to string
*Return: int
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
