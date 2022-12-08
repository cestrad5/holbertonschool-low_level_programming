#include "main.h"
/**
* _strlen - Gets the length of a string
* @s: String being evaluated
*
* Return: Length of string
*/
int _strlen(char *s)
{
int i =  0;

while (*(s + i))
++i;
return (i);
}
/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL terminated string to add at the end of file
* Return: 1 on success
* -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
/*int for the file descriptor*/
int fd;
/*if filename does not exits retur -1*/
if (!filename)
return (-1);
/*Open the file write only and add ad the end with APPEND*/
fd = open(filename, O_WRONLY | O_APPEND);
if (!text_content)
return (1);
if (write(fd, text_content, _strlen(text_content)) == -1)
return (-1);
close(fd);
return (1);
}
