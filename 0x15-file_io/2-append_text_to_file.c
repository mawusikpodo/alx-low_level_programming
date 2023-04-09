#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

        if (filename == NULL)
                return (-1);

        fd = open(filename, O_RDWR | O_APPEND);
        if (fd == -1)
                return (-1);

        while (text_content && *(text_content + len))
                len++;

        w = write(fd, text_content, len);
        close(fd);
        if (w == -1)
                return (-1);
        return (1);
}
