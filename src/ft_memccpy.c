#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n) {
	size_t loop = 0;
	char *tmp_dest = (char*)dest;
	const char *tmp_src = (char*)src;
	while (loop < n) {
		tmp_dest[loop] = tmp_src[loop];
		if (tmp_src[loop] == (char)c)
			return ((void*)(&(tmp_src[loop + 1])));
		loop++;
	}
	return (NULL);
}
