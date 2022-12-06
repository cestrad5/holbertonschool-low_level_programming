#include "main.h"
/**
* read_textfile - function that reads a text file
*                  and prints it to the POSIX standard output.
* @filename: file's name
* @letters: number of letters
* Return: wr or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fileT = 0, r = 0, wr = 0;
char *textfile;
/*set memory space for textfile*/
textfile = malloc(sizeof(char) * letters);
/*open de file as read only*/
fileT = open(filename, O_RDONLY);
/*read the file*/
r = read(fileT, textfile, letters);
/*write the file*/
wr = write(STDOUT_FILENO, textfile, r);

/*If fails, free textfile memory*/
if (!filename || fileT == -1 || r == -1 || !textfile)
{
free(textfile);
return (0);
}

close(fileT);
free(textfile);
return (wr);
}
