#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
	size_t loop = 0;
	char *tmp_dest = (char*)dest;
	const char *tmp_src = (char*)src;
	while (loop < n) {
		tmp_dest[loop] = tmp_src[loop];
		loop++;
	}
	return (dest);
}
