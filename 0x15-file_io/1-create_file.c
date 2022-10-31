#include "main.h"
#include <sys/stat.h>
/**
  * create_file - function that creates a file
  * @filename: pointer t the file
  * @text_content: pointer to the content of the new file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	char *txt = text_content;

	while (*txt)
	{
		len++;
		txt++;
	}

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, len + 1);
	if (w == -1 || (len + 1 != w))
		return (-1);
	return (1);
}