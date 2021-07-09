#include "holberton.h"
/**
 * append_text_to_file - That appends text at the end of a file.
 * @filename: THis is the name of the file
 * @text_content: This the string to append to text
 *
 * Return: 1 if is success and if not is -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int len_Text, lenWrite;

		for (len_Text = 0; text_content[len_Text] != '\0'; len_Text++)
			;
		lenWrite = write(fd, text_content, len_Text);

		if (lenWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
