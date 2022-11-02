#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters.
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	int file;

	ssize_t rd, wr;

	char *buf;



	if (!filename)

		return (0);



	file = open(filename, O_RDONLY);



	if (file == -1)

		return (0);



	buf = malloc(sizeof(char) * (letters));

	if (!buf)

		return (0);



	rd = read(file, buf, letters);

	wr = write(STDOUT_FILENO, buf, rd);



	close(file);



	free(buf);



	return (wr);

}
