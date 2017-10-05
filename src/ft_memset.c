#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
	size_t loop = 0;
	while (loop < n) {
		((char*)s)[loop] = (char)c;
		loop++;
	}
	return (s);
}
