#include <string.h>
#include <stdio.h>
#include "libft.h"

static void memset_test(void) {
	char str[] = "A test string.";
	char c = '#';
	size_t n = 3;
	printf("memset ===\nString: '%s'\nChar: %c\nN: %lu\n", str, c, n);
	ft_memset((void*)str, (int)c, n);
	printf("Result: %s\n", str);
}

static void bzero_test(void) {
	char str[] = "A test string.";
	size_t n = 1;
	printf("bzero ===\nString: '%s'\nN: %lu\n", str, n);
	ft_bzero((void*)str, 1);
	printf("Result: %s\n", str);
}

static void memcpy_test(void) {
	char str1[] = "A test string.";
	char str2[] = "##############";
	size_t n = strlen(str1);
	printf("bzero ===\nString1: '%s'\nString2: '%s'\nN: %lu\n", str1, str2, n);
	ft_memcpy((void*)str1, (void*)str2, n);
	printf("Result: String1 - '%s' String2 - '%s'\n", str1, str2);
}

int main(void) {
	memset_test();
	bzero_test();
	memcpy_test();
	return (0);
}
