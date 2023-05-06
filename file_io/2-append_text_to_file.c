#include "main.h"
/**
 * append_text_to_file - function that appands text at the end of a file
 * @filename: file name
 * @text_content: text
 * Return: 1 on success -1 on faillure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

		if (filename == NULL)
		return (-1);

		if (text_content != NULL)
			len = strlen(text_content);

		o = open(filename, O_WRONLY | O_APPEND);
		w = write(o, text_content, len);

	if (o == -1 || w == -1)

		return (-1);

	close(o);
	return (1);



}
